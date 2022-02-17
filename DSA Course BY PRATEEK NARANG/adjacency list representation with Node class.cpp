#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	string name;
	list <string> nbrs;

	Node(string name)
	{
		this->name = name;
	}
};

class Graph {
	//all nodes should be added in hashmao
	// hashmap(stirng,Node*)

	unordered_map<string, Node*> m;

public:
	Graph(vector<string> cities)
	{
		for (auto city : cities)
		{
			m[city] = new Node(city);
		}
	}

	void addEdge(string x, string y, bool undir = false)
	{
		m[x]->nbrs.push_back(y);
		if (undir)
		{
			m[y]->nbrs.push_back(x);
		}
	}

	void printAdjlist()
	{
		for (auto cityPair : m )
		{
			auto city = cityPair.first;
			Node *node = cityPair.second;

			cout << city << "-->";
			for (auto nbr : node->nbrs)
			{
				cout << nbr << ", ";
			}
			cout << endl;
		}
	}
};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<string> cities = {"cumilla", "dhaka", "chittagong", "dubai"};

	Graph g(cities);

	g.addEdge("cumilla", "dhaka");
	g.addEdge("dubai", "dhaka");
	g.addEdge("cumilla", "chittagong");
	g.addEdge("chittagong", "dhaka");

	g.printAdjlist();
	return 0;
}
