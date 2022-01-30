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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node*root = new node(1);
	root->left = new node(2);
	root->right = new node(3);
	root->left->left = new node(4);
	root->left->right = new node(5);
	root->right->right = new node(6);
	root->left->right->left = new node(7);
	root->left->right->right = new node(8);
	//root->left->right->right->left = new node(9);
	//root->left->right->right->right = new node(10);

	pair<int, bool> p = isHeightBalanced(root);
	if (p.second)
	{
		cout << "Yes, its a height balanced tree" << endl;
	}
	else
	{
		cout << "Not a height balanced tree" << endl;

	}

	return 0;

}


