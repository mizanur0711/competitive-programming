//unsolved
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
		long long x, n;
		cin >> x >> n;
		long long ans = x;
		if (x % 2 != 0)
		{
			if (n % 2 == 0)
			{
				n = (n + 1) * n;
				n = / 2;
				ans += (n + 1) - n;
			}
			else {

			}

		}
	}


	return 0;
}