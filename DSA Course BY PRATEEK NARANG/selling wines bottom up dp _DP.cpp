#include<bits/stdc++.h>
using namespace std;
//diagonal dp also
//top down dp code
int wines_bottom_up(int price[], int n)
{
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	for (int i = n - 1; i >= 0; i--)
	{
		//bottom row to top row
		for (int j = 0; j < n; j++)
		{
			if (i == j) {
				dp[i][j] = n * price[i];
			}
			else if (i < j)
			{
				int y = n - (j - i);
				int pick_left = price[i] * y + dp[i + 1][j];
				int pick_right = price[j] * y + dp[i][j - 1];

				dp[i][j] = max(pick_right, pick_left);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}



	return dp[0][n - 1];

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a[] = {2, 3, 5, 1, 4};
	int n = 5 ;

	cout << wines_bottom_up(a, n) << endl;

	return 0;
}
