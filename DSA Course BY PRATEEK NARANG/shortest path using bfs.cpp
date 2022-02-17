#include<bits/stdc++.h>
using namespace std;

//single source shortest path for undirected graph
class Graph {
	int V;
	list<int> *l;
public:
	Graph(int v)
	{
		V = v;
		l = new list<int> [V];
	}

	void addEdge(int i, int j, bool undir = true)
	{
		l[i].push_back(j);
		if (undir)
		{
			l[j].push_back(i);
		}
	}

	void bfs(int sources, int dest = -1 )
	{
		queue<int> q;
		bool *visited = new bool[V] {0};
		int *dist = new int[V] {0};
		int *parent = new int[V];

		for (int i = 0; i < V; i++)
		{
			parent[i] = -1;
		}


		q.push(sources);
		visited[sources] = true;
		parent[sources] = sources;
		dist[sources] = 0;
		while (!q.empty())
		{
			//will do some work for every node
			int f = q.front();
			//cout << f << endl;
			q.pop();

			//push the nbrs of the current node inside q if they are nor alrdy visited yet

			for (auto nbr : l[f])
			{
				if (!visited[nbr])
				{
					q.push(nbr);
					//parent and dist
					parent[nbr] = f;
					dist[nbr] = dist[f] + 1;
					visited[nbr] = true;
				}
			}
		}
		//print the shortest distance
		for (int i = 0; i < V; i++)
		{
			cout << "shortest dist to " << i << " is " << dist[i] << endl;
		}


		// print the path from a source to any dist

		if (dest != -1 )
		{
			int temp = dest;
			while (temp != sources)
			{
				cout << temp << " -- ";
				temp = parent[temp];
			}
			cout << sources << endl;
		}
	}
};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 5);
	g.addEdge(5, 6);
	g.addEdge(4, 5);
	g.addEdge(0, 4);
	g.addEdge(3, 4);

	g.bfs(1, 6);

	return 0;
}
