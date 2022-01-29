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
		int n, m, rb, cb, rd, cd;
		cin >> n >> m >> rb >> cb >> rd >> cd;
		int cost = 0;
		while (1)
		{
			if (abs(rb) == rd || abs(cb) == cd)
			{
				break;
			}
			else
			{
				if ((rb + 1 > n && cb + 1 > m))
				{
					rb = -rb;
					cb = -cb;
					rb++;
					cb++;
				}
				else if (rb + 1 > n)
				{
					rb = -rb;
					cb++;
					rb++;
				}
				else if (cb + 1 > m)
				{
					cb = -cb;
					rb++;
					cb++;
				}
				else
				{
					rb++;
					cb++;
				}
				cost++;
			}

		}


		cout << cost << endl;
	}

	return 0;

}


