#include<bits/stdc++.h>
using namespace std;

class Node {
public:
	int x;
	int y;
	int dist;

	Node(int x, int y, int dist)
	{
		this->x = x;
		this->y = y;
		this->dist = dist;
	}
};

class Compare {
public:
	bool operator()(const Node &a, const Node &b)
	{
		return a.dist <= b.dist;
	}
};
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int grid[][5] = {{31, 100, 65, 12, 18},
		{10, 13, 47, 157, 6},
		{100, 113, 174, 11, 33},
		{88, 124, 41, 20, 140},
		{99, 32, 111, 41, 20}
	};
	int m = 5;
	int n = 5;;

	int i = 0;
	int j = 0;

	//2d vector to denote the distance of each cell
	vector<vector<int>> dist(m + 1, vector<int> (n + 1, INT_MAX));

	dist[i][j] = grid[0][0];
	set<Node, Compare> s;
	s.insert(Node(0, 0, dist[0][0]));

	int dx[] = {0, 0, 1, -1};
	int dy[] = {1, -1, 0, 0};

	while (!s.empty())
	{
		auto it = s.begin();
		int cx = it->x;
		int cy = it->y;
		int cd = it->dist;

		s.erase(it);

		//update nbrs

		for (int k = 0; k < 4; k++)
		{
			int nx = cx + dx[k];
			int ny = cy + dy[k];

			if (nx >= 0 && ny >= 0 && nx < m && ny < n && cd + grid[nx][ny] < dist[nx][ny])
			{
				//remove the old node if it exist

				Node temp(nx, ny, dist[nx][ny]);
				if (s.find(temp) != s.end())
				{
					s.erase(s.find(temp));
				}

				//insert the new node insert the set
				int nd = cd + grid[nx][ny];
				dist[nx][ny] = nd;
				s.insert(Node(nx, ny, nd));
			}
		}
	}


	cout << dist[m - 1][n - 1] << endl;
	return 0;
}
