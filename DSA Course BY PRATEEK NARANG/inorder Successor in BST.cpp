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

class LinkedList {
public:
	Node* head;
	Node* tail;
};

// next inorder successor
Node * inOrderSucc(Node * root, Node * target)
{
	//if right subtree
	if (target->right != NULL)
	{
		Node* temp = target->right;
		while (temp->left != NULL)
		{
			temp = temp->left;
		}
		return temp;
	}

	//traver node to leaf
	Node * temp = root;
	Node * succ = NULL;

	while (temp != NULL)
	{
		if (temp->key > target->key)
		{
			succ = temp;
			temp = temp->left;
		}
		else if (temp->key < target->key)
		{
			temp = temp->right;
		}
		else {
			break;
		}
	}
	return succ;

}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Node *root = NULL;
	vector<int> arr = {8, 3, 10, 1, 6, 14, 4, 7, 13};
	for (int x : arr)
	{
		root = insertNode(root, x);
	}

	//testing code

	Node* t1 = root->left->right->right;
	Node* t2 = root->right;

	cout << "in Order Succ of 7 is " << inOrderSucc(root, t1)->key << endl;
	cout << " in order succ of 10 is " << inOrderSucc(root, t2)->key << endl;



	return 0;

}
