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

Node* sortedArrayToBst(vector<int> arr, int start, int end)
{
	//if s>e happen then there is no node exist so return NULL
	if (start > end)
	{
		return NULL;
	}

	int mid = (start + end) / 2;
	Node *root = new Node(arr[mid]);

	//creating left & right subtree recursively
	root->left = sortedArrayToBst(arr, start, mid - 1);
	root->right = sortedArrayToBst(arr, mid + 1, end);

	return root;
}

int findClosestInBst(Node *root, int target)
{
	int closest;
	int diff = INT_MAX;

	Node *temp = root;

	while (temp != NULL)
	{
		int current_diff = abs(temp->key - target);

		if (current_diff == 0 )
		{
			return temp->key;
		}

		if (current_diff < diff)
		{
			diff = current_diff;
			closest  = temp->key;
		}
		//right or left

		if (temp->key < target)
		{
			temp = temp->right;
		}
		else
		{
			temp = temp->left;
		}
	}
	return closest;
}

class LinkedList {
public:
	Node* head;
	Node* tail;
};

LinkedList tree2LL(Node * root)
{
	LinkedList l;
	//base case;

	if (root == NULL)
	{
		l.head = l.tail = NULL;
	}

	//4 cases

	if (root->left == NULL && root ->right == NULL)
	{
		l.head = l.tail = root;
	}
	else if ( root -> left != NULL && root->right == NULL)
	{
		LinkedList leftLL = tree2LL(root->left);
		leftLL.tail->right = root;

		l.head = leftLL.head;
		l.tail = root;
	}
	else if (root->left == NULL && root->right != NULL)
	{
		LinkedList rightLL = tree2LL(root->right);
		root->right = rightLL.head;

		l.head = root;
		l.tail = rightLL.tail;
	}
	else
	{
		LinkedList leftLL = tree2LL(root->left);
		LinkedList rightLL = tree2LL(root->right);
		leftLL.tail->right = root;
		root->right = rightLL.head;

		l.head = leftLL.head;
		l.tail = rightLL.tail;
	}
	return l;
}

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
