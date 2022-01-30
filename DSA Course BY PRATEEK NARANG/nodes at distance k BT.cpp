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
	root->left->right->right->left = new node(9);
	root->left->right->right->right = new node(10);

	//target node 5;

	node *target = root->left->right;

	int k = 2;
	printNodesAtKDistance(root, target, k);
	return 0;

}


