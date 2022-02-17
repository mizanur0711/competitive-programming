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
	}

	bool dfs(int node, vector<bool> &visited, vector<bool> &stack)
	{
		//arrive at node
		visited[node] = true;
		stack[node] = true;
		//do some work at node

		for (int nbr : l[node])
		{
			//cout << node << "-->" << nbr << endl;
			if (stack[nbr] == true)
			{
				return true;
			}
			else if (visited[nbr] == false)
			{
				bool nbrFoundACycle = dfs(nbr, visited, stack);
				if (nbrFoundACycle)
				{
					return true;
				}
			}
		}
		// going back
		stack[node] = false;
		return false;
	}

	bool contains_cycle()
	{
		vector<bool> visited(V, false);
		vector<bool> stack(V, false);

		//if the completed graph is not connected then the for loop will call dfs on over all

		for (int i = 0; i < V; i++)
		{
			if (!visited[i])
			{
				if (dfs(i, visited, stack))
				{
					return true;
				}
			}
		}
		return false;
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
