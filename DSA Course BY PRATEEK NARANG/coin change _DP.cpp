#include<bits/stdc++.h>
using namespace std;

int minNumberOfCoinsForChange(int m, vector<int> denoms)
{
	// bottom up approach
	vector<int> dp(m + 1, 0);

	dp[0] = 0;

	for (int i = 1; i <= m; i++)
	{
		dp[i] = INT_MAX;
		for (auto c : denoms )
		{
			if (i - c >= 0 && dp[i - c] != INT_MAX )
			{
				dp[i] = min(dp[i], dp[i - c] + 1);
			}

		}
	}

	return dp[m] == INT_MAX ? -1 : dp[m];
}
/*
int TOP_DOWN_minNumberOfCoinsForChange(int m, vector<int> denoms)
{

	vector<int> dp(m + 1, 0);

	dp[0] = 0;

	for (int i = 1)

	}
*/
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> coins = {1, 3, 7, 10};
	int m = 15;
	cout << minNumberOfCoinsForChange(m, coins) << endl;
//	cout << TOP_DOWN_minNumberOfCoinsForChange(m, coins) << endl;
	return 0;
}
