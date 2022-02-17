#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<int> *l;
public:
	Graph(int v) {
		V = v;
		l = new list<int>[v];
	}

	void addEdge(int i, int j, bool undir = true)
	{
		l[i].push_back(j);
		if (undir)
		{
			l[j].push_back(i);
		}
	}

	void printAdjlist() {
		//iterate over all the rows
		for (int i = 0; i < V; i++)
		{
			//every element of the ith row linked list
			cout << i << "--> ";
			for (auto node : l[i])
			{
				cout << node << ",";
			}
			cout << endl;
		}
	}

};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Graph g(6);

	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(2, 1);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(2, 3);
	g.addEdge(3, 5);

	g.printAdjlist();
	return 0;
}
