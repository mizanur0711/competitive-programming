#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<int> *l;
public:
	Graph(int v)
	{
		V = v;
		l = new list<int> [V];
	}

	void addEdge(int i, int j)
	{
		l[i].push_back(j);
		l[j].push_back(i);
	}
	bool dfs(int node, vector<bool> &visited, int parent)
	{
		//mark that node as visited
		visited[node] = true;

		for (auto nbr : l[node])
		{
			if (!visited[nbr])
			{
				bool nbrFoundACycle = dfs(nbr, visited, node);
				if (nbrFoundACycle)
				{
					return true;
				}
			}
			//nbr is visited'and its not the parent of current node in the current dfs call
			else if (nbr != parent)
			{
				return true;
			}
		}
		return false;
	}
	bool contains_cycle() {
		//graph is single component or its a strongly connnected graph

		vector<bool> visited(V, false);
		return dfs(0, visited, -1);
	}
};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Graph g(3);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 0);

	cout << g.contains_cycle() << endl;

	return 0;
}
