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
		vector<int> v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		if (v[0] == n)
		{
			for (int i = n - 1; i >= 1; i--)
			{
				cout << v[i] << " ";
			}
			cout << n << endl;

		}
		else if (v[n - 1] == n)
		{
			for (int i = n - 2; i >= 0; i--)
			{
				cout << v[i] << " ";
			}
			cout << n << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}
