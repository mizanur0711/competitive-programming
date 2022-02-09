#include<bits/stdc++.h>
using namespace std;

//build a prefix tree - Trie

class Node {
public:
	char data;
	unordered_map<char, Node*> children;
	bool isTerminal;

	Node(char d)
	{
		data = d;
		isTerminal = false;
	}

};

class Trie {
public:
	Node * root;

	Trie() {
		root = new Node('\0');
	}

	//later
	void insert(string word)
	{
		Node* temp = root;

		for (char ch : word)
		{
			if (temp->children.count(ch) == 0)
			{
				Node *n = new Node(ch);
				temp->children[ch] = n;
			}
			temp = temp->children[ch];
		}

		temp->isTerminal = true;
	}
};

void searchHelper(Trie t, string document, int i, unordered_map<string, bool> &m)
{
	Node*temp = t.root;
	for (int j = i; document.length(); j++)
	{
		char ch = document[j];
		if (temp->children.count(ch) == 0)
		{
			return;
		}
		temp = temp->children[ch];
		if (temp->isTerminal) {
			//history part
			string out = document.substr(i, j - i + 1);
			m[out] = true;
		}
	}

	return;
}

void documentSearch(string document, vector<string> words)
{
	//1. create a trie of words
	Trie t;
	for (auto w : words)
	{
		t.insert(w);
	}

	//2. seaching (helper Fn)
	unordered_map<string, bool> m;

	for (int i = 0; i < document.length(); i++)
	{
		searchHelper(t, document, i, m);
	}

	//3. checking which word are marked true

	for (auto w : words)
	{
		if (m[w])
		{
			cout << w << " : true" << endl;
		}
		else {
			cout << w << " : false" << endl;
		}
	}

	return;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//simplified suffix trie
	string document = "little cute cat loves to code in c++, java & python";
	vector<string> words = {"cute cat", "ttle", "cat", "quick", "big"};

	documentSearch(document, words);
	return 0;
}
