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
		set<int> s;
		for (int i = 1; i * i <= n; i++)
		{
			s.insert(i * i);
		}
		for (int i = 1; i * i * i <= n; i++)
		{
			s.insert(i * i * i);
		}
		cout << s.size() << endl;
	}
	return 0;
}


