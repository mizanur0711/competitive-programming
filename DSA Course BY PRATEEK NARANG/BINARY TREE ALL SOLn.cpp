#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node*left;
	node*right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;

	}
};

node* buildTree() {
	int d;
	cin >> d;

	if (d == -1)
	{
		return NULL;
	}

	node* n = new node(d);
	n->left = buildTree();
	n->right = buildTree();

	return n;
}


void levelOrderPrint(node*root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		node* temp = q.front();
		if (temp == NULL)
		{
			cout << endl;
			q.pop();
			if (!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			q.pop();
			cout << temp->data << " ";

			if (temp->left)
			{
				q.push(temp->left);
			}

			if (temp->right)
			{
				q.push(temp->right);
			}

		}

	}
	return ;
}

void printKthLevel(node *root, int k)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	while (!q.empty())
	{
		node* temp = q.front();
		if (temp == NULL)
		{
			//	cout << endl;
			q.pop();
			k--;
			if (!q.empty())
			{
				q.push(NULL);
			}
			if (k == -1)
			{
				return;
			}
		}
		else
		{
			q.pop();
			if (k == 0)
			{
				cout << temp->data << " ";
			}

			if (temp->left)
			{
				q.push(temp->left);
			}

			if (temp->right)
			{
				q.push(temp->right);
			}

		}

	}
	return ;

}
//helper function to find height of tree
int height(node*root)
{
	if (root == NULL)
	{
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);

	return 1 + max(h1, h2);
}

//diameter

int diameter(node*root)
{
	//base case
	if (root == NULL)
	{
		return 0;
	}

	//rec case

	int d1 = height(root->left) + height(root->right);
	int d2 = diameter(root->left);
	int d3 = diameter(root->right);

	return max(d1, max(d2, d3));
}


//optimised code
class HDPair {
public:
	int height;
	int diameter;
};

HDPair optDiameter(node*root)
{
	HDPair p;

	if (root == NULL)
	{
		p.height = p.diameter = 0;
		return p;
	}

	//otherwise

	HDPair Left = optDiameter(root->left);
	HDPair Right = optDiameter(root->right);

	p.height = max(Left.height, Right.height) + 1;

	int  D1 = Left.height + Right.height;
	int D2 = Left.diameter;
	int D3 = Right.diameter;

	p.diameter = max(D1, max(D2, D3));
	return p;
}

//replace with descendant sum leaving leaf nodes intact

int replaceWithSum(node *root)
{
	//base case
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL )
	{
		return root->data;
	}

	//recursive case
	int LS = replaceWithSum(root->left);
	int RS = replaceWithSum(root->right);

	int temp = root->data;
	root->data = LS + RS;
	return root->data + temp;
}

pair<int, bool> isHeightBalanced(node *root)
{
	pair <int, bool> p, Left, Right;
	if (root == NULL)
	{
		p.first = 0;
		p.second = true;
		return p;
	}

	//rec case

	Left = isHeightBalanced(root->left);
	Right = isHeightBalanced(root->right);

	int height = max(Left.first, Right.first) + 1;

	if (abs(Left.first - Right.first) <= 1 and Left.second and Right.second)
	{
		return make_pair(height, true);
	}
	return make_pair(height, false);


}

// creating pair for inc & exc

class Pair {
public:
	int inc;
	int exc;
};

Pair maxSubsetSum(node *root)
{
	Pair p;

	if (root == NULL)
	{
		p.inc = 0;
		p.exc = 0;
		return p;
	}
	Pair Left = maxSubsetSum(root->left);
	Pair Right = maxSubsetSum(root->right);

	p.inc = root->data + Left.exc + Right.exc;
	p.exc = max(Left.inc, Left.exc) + max(Right.inc, Right.exc);

	return p;

}
void printAtLevelK(node *root, int k) {

	if (root == NULL)
	{
		return;
	}
	if (k == 0)
	{
		cout << root->data << " ";
	}
	printAtLevelK(root->left, k - 1);
	printAtLevelK(root->right, k - 1);
	return;
}



int printNodesAtKDistance(node *root, node *target , int k)
{
	//base case
	if (root == NULL )
	{
		return -1;
	}

	//reach the target node
	if (root == target) {
		printAtLevelK(target, k);
		return 0;
	}

	//other case
	int DL = printNodesAtKDistance(root->left, target, k);
	if (DL != -1)
	{
		//2 cases
		// print the current node

		if (DL + 1 == k)
		{
			cout << root->data << " ";
		}

		// or print somenodes int the right subtree
		else {
			printAtLevelK(root->right, k - 2 - DL);
		}
		return 1 + DL;
	}
	int DR = printNodesAtKDistance(root->right, target, k);
	if (DR != -1)
	{
		//2 cases
		//print current node
		if (DR + 1 == k)
		{
			cout << root->data << " ";
		}
		else
		{
			printAtLevelK(root->left, k - 2 - DR);
		}
		return 1 + DR;
	}
	return -1;
}
//helper method
void traverseTree(node *root, int d, map<int, vector<int>> &m)
{
	if (root == NULL)
	{
		return;
	}
	m[d].push_back(root->data);
	traverseTree(root->left, d - 1, m);
	traverseTree(root->right, d + 1, m);

	return;

}

void verticalOrderPrint(node *root)
{
	map<int, vector<int> > m;

	int d = 0;
	traverseTree(root, d, m);

	for (auto p : m) {
		int key = p.first;
		vector <int> line = p.second;
		for (auto data : line) {
			cout << data << " ";
		}
		cout << endl;
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node*root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->left = new node(6);
	root->right->right = new node(7);
	root->right->left->right = new node(8);
	root->right->right->right = new node(9);
	verticalOrderPrint(root);
	return 0;

}


