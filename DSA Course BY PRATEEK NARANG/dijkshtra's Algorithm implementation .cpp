//weighted graph
//undirecrted graph

#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	list<pair<int, int> > *l;
public:
	Graph(int v)
	{
		V = v;

		l = new list<pair<int, int>> [V];
	}

	void addEdge(int u, int v, int wt, bool undir = true)
	{
		l[u].push_back({wt, v});
		if (undir)
		{
			l[v].push_back({wt, u});
		}
	}

	int dijkstra(int src, int dest)
	{
		//data structures
		vector<int> dist(V, INT_MAX);
		set<pair<int, int> > s;

		//1.init

		dist[src] = 0;
		s.insert({0, src});


		while (!s.empty())
		{
			auto it = s.begin();
			int node = it->second;
			int distTillNow = it->first;
			s.erase(it);

			//iterate over the nbrs of node

			for (auto nbrPair : l[node])
			{
				int nbr = nbrPair.second;
				int currentEdge = nbrPair.first;

				if (distTillNow + currentEdge < dist[nbr])
				{
					//remove if nbr alrdy exist in the set

					auto f = s.find({dist[nbr], nbr});

					if (f != s.end())
					{
						s.erase(f);
					}

					//insert the updated value with the new dist
					dist[nbr] = distTillNow + currentEdge;
					s.insert({dist[nbr], nbr});
				}
			}

		}
		//single source shortest dist to all other nodes
		for (int i = 0; i < V; i++)
		{
			cout << "node i " << i << "Dist " << dist[i] << endl;
		}

		return dist[dest];
	}
};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	Graph g(5);
	g.addEdge(0, 1, 1);
	g.addEdge(1, 2, 1);
	g.addEdge(0, 2, 4);
	g.addEdge(0, 3, 7);
	g.addEdge(3, 2, 2);
	g.addEdge(3, 4, 3);
	cout << g.dijkstra(0, 4) << endl;

	return 0;
}
