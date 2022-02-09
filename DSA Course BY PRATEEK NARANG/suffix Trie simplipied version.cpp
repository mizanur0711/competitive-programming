#include<bits/stdc++.h>
using namespace std;

//build a prefix tree - Trie

class Node {
public:
	char data;
	unordered_map<char, Node*> m;
	bool isTerminal;

	Node(char d)
	{
		data = d;
		isTerminal = false;
	}

};

class SuffixTrie {
public:
	Node * root;

	SuffixTrie() {
		root = new Node('\0');
	}

	//later
	void insert_helper(string word)
	{
		Node* temp = root;

		for (char ch : word)
		{
			if (temp->m.count(ch) == 0)
			{
				Node *n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}

		temp->isTerminal = true;
	}

	bool search(string word)
	{
		Node* temp = root;

		for (char ch : word )
		{
			if (temp->m.count(ch) == 0)
			{
				return false;
			}
			temp = temp ->m[ch];
		}
		return temp->isTerminal;
	}

	void insert(string word)
	{
		//pick all substring from (i,eos) and insert helper

		for (int i = 0; word[i] != '\0'; i++)
		{
			insert_helper(word.substr(i));
		}
	}
};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//simplified suffix trie
	string input = "hello";
	string suffixes[] = {"lo", "ello", "he"};

	SuffixTrie t;

	t.insert(input);

	for (auto sf : suffixes)
	{
		if (t.search(sf))
		{
			cout << "yes" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}
