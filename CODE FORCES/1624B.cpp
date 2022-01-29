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
		long long a, b, c;
		cin >> a >> b >> c;
		if (((2 * b - a) % c == 0 && 2 * b > a) || ((2 * b - c) % a == 0 && 2 * b > c) || ((a + c) % b == 0 && ((a + c) / b ) % 2 == 0))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}