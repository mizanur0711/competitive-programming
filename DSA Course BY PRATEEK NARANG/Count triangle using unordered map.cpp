#include<bits/stdc++.h>
using namespace std;


int count_tringle(vector<pair<int, int>> &points)
{
	//two unordered map for x count and y count
	unordered_map<int, int> freq_x;
	unordered_map<int, int > freq_y;

	//counting the freq by iterating
	for (auto p : points)
	{
		int x = p.first;
		int y = p.second;

		freq_x[x]++;
		freq_y[y]++;
	}

	//count
	int count ;
	for (auto p : points)
	{
		int x = p.first;
		int y = p.second;

		int fx = freq_x[x];
		int fy = freq_y[y];

		count += (fx - 1) * (fy - 1);

	}
	return count;


}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int x, y;

	vector<pair<int, int> > points;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		points.push_back({x, y});
	}

	cout << count_tringle(points) << endl;

	return 0;
}
