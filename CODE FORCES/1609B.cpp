#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	size_t pos = s.find("abc", 0);
	int count = 0;
	while (pos != string::npos)
	{
		count++;
		pos = s.find("abc", pos + 1) ;

	}
	while (q--)
	{
		int i;
		char c;
		cin >> i;
		cin >> c;
		for (int j = i - 3; j < i; j++)
		{
			if (j >= 0 && j + 3 <= n && s.substr(j, 3 ) == "abc" )
			{
				count--;
			}

		}

		s[i - 1] = c;
		for (int j = i - 3; j < i; j++)
		{
			if (j >= 0 && j + 3 <= n && s.substr(j, 3) == "abc" )
			{
				count++;
			}

		}
		cout << count << endl;
	}
	return 0;
}

