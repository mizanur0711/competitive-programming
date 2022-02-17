#include<bits/stdc++.h>
using namespace std;


int dfs(vector<vector<int>> &matrix, vector<vector<bool>> &visited, int i, int j, int m, int n)
{
	visited[i][j] = true;
	int cs = 1;

	int dx[] = {1, -1, 0, 0};
	int dy[] = {0, 0, 1, -1};

	for (int k = 0; k < 4; k++)
	{
		int nx = i + dx[k];
		int ny = j + dy[k];

		if (nx >= 0 && ny >= 0 && nx < m && ny < n && matrix[nx][ny] == 1 && !visited[nx][ny])
		{
			int subcompopent = dfs(matrix, visited, nx, ny, m, n);

			cs += subcompopent;
		}
	}

	return cs;
}

int largest_island(vector<vector<int>> matrix)
{
	//return the size of largest island in grid

	int m = matrix.size();
	int n = matrix[0].size();

	//visited matrix

	vector<vector<bool>> visited(m , vector<bool>(n, false));

	int largest = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j] && matrix[i][j] == 1)
			{
				int size = dfs(matrix, visited, i, j, m, n);
				if (size > largest)
				{	largest = size;
				}
			}
		}
	}

	return largest;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<vector<int>> grid = {
		{1, 0, 0, 1, 0},
		{1, 0, 1, 0, 0},
		{0, 0, 1, 0, 1},
		{1, 0, 1, 1, 1},
		{1, 0, 1, 1, 0}
	};

	cout << largest_island(grid) << endl;

	return 0;
}
