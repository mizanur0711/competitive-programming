#include<bits/stdc++.h>
using namespace std;

int countwaysOpt(int n, int k)
{
	vector<int> dp(n + 1, 0);
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= k; i++)
	{
		dp[i] = 2 * dp[i - 1];
	}

	for (int i = k + 1; i <= n; i++)
	{
		dp[i] = 2 * dp[i - 1] - dp[i - k - 1];
	}

	return dp[n];
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 6;
	int k  = 4;
	cout << countwaysOpt(n, k) << endl;



	return 0;
}
