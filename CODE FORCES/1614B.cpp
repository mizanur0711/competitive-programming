#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<pair<int, int>> a(n + 1);
		for (int i = 1; i <= n; i++)\
		{
			int x;
			cin >> x;
			a.push_back({x, i});
		}
		sort(a.rbegin(), a.rend());
		vector<int> x(n + 1, 0);
		long long temp = 0;
		for (int i = 1; i <= n; i++)
		{
			x[a[i - 1].second] = (i + 1) / 2 * (i % 2 == 0 ? -1 : 1);
			temp += 2LL * ((i + 1) / 2) * a[i - 1].first;
		}
		cout << temp << endl;
		for (auto i : x)
		{
			cout << i << " ";
		}
		cout << endl;


	}
	return 0;
}

