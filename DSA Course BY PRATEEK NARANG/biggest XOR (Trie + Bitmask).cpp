#include<bits/stdc++.h>
using namespace std;

//build a prefix tree - Trie

class node {
public:
	node *left;//0
	node *right;//1

};


class Trie {
	node * root;
public:

	Trie() {
		root = new node();
	}
	void insert(int n)
	{
		//bits of that number in the trie

		node* temp = root;
		for (int i = 31; i >= 0; i--)
		{
			int bit = (n >> i) & 1;
			if (bit == 0)
			{
				if (temp->left == NULL)
				{
					temp->left = new node();
				}

				//go to that node
				temp = temp ->left;
			}
			else if (temp->right = NULL)
			{
				temp->right = new node();
			}
			temp = temp->right;
		}
		//insertion is done

	}

	int max_xor_helper(int value) {
		int current_ans = 0;
		node* temp = root;

		for (int j = 31; j >= 0; j--)
		{
			int bit = (value >> j) & 1;

			if (bit == 0)
			{
				//find the opp value
				if (temp->right != NULL)
				{
					temp = temp->right;
					current_ans += (1 << j);
				}
				else {
					temp = temp->left;
				}
			}
			else
			{
				//look for zero
				if (temp->left != NULL)
				{
					temp = temp->left;
					current_ans += (1 << j);
				}
				else {
					temp = temp->right;
				}

			}
		}
		return current_ans;

	}

	int max_xor(int *input, int n)
	{
		int max_xor = 0;
		for (int i = 0; i < n; i++)
		{
			int value = input[i];
			insert(value);
			int current_xor = max_xor_helper(value);
			max_xor = max(max_xor, current_xor);
		}

		return max_xor;

	}
};




int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int input[] = {3, 10, 5, 25, 9, 2};
	int n = sizeof(input) / sizeof(int);

	Trie t;
	cout << t.max_xor(input, n);
	return 0;

	//****bug need to be fized
}
