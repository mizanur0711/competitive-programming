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

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	node*root = buildTree();
	levelOrderPrint(root);
	replaceWithSum(root);
	levelOrderPrint(root);
	return 0;

}


