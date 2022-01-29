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


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node*root = buildTree();
	levelOrderPrint(root);
	cout << "diameter of tree is "  << diameter(root) << endl;

	return 0;

}


