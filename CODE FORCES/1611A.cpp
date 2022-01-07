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
		long long n, ans;
		cin >> n;
		int c = 0;
		string s = to_string(n);
		if (n % 2 == 0)
		{
			cout << "0" << endl;
		}
		else
		{
			for (int i = 0; i < s.size(); i++)
			{
				int x = s[i] - '0';
				if (i == 0 && x % 2 == 0)
				{
					cout << "1" << endl;
					break;
				}
				else if (i > 0 && x % 2 == 0)
				{
					cout << "2" << endl;
					break;
				}
				else if (i == s.size() - 1)
				{
					cout << "-1" << endl;
					break;
				}
			}
		}
	}
	return 0;
}