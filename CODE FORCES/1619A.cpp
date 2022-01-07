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
		string s;
		cin >> s;
		if (s.size() % 2 != 0 )
		{
			cout << "NO" << endl;
		}
		else
		{
			int mid = s.size() / 2;
			int i = 0, j = mid;
			int f = 1;
			while (i < mid)
			{
				if (s[i] == s[j + i])
				{
					i++;
				}
				else
				{
					f = 0;
					break;
				}
			}
			if (f == 1)
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}


