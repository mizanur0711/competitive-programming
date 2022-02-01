#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int key;
	Node *left;
	Node *right;

	Node(int key) {
		this->key = key;
		left = right = NULL;
	}

};

Node* insertNode(Node *root, int key)
{
	if (root == NULL)
	{
		return new Node(key);
	}

	//rec case

	if (key < root->key)
	{
		root->left = insertNode(root->left, key);
	}
	else
	{
		root->right = insertNode(root->right, key);
	}
	return root;
}
//print node

void printInOrder(Node *root)
{
	if (root == NULL)
	{
		return;
	}

	//left,root,right

	printInOrder(root->left);
	cout << root->key << " ";
	printInOrder(root->right);

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Node * root = NULL;

	int a[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
	for (int x : a)
	{
		root = insertNode(root, x);
	}
	printInOrder(root);

	return 0;

}


