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
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
	Node * root = sortedArrayToBst(arr, 0, arr.size() - 1);
	printInOrder(root);

	return 0;

}

