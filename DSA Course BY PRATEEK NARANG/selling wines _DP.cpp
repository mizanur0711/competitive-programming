#include<bits/stdc++.h>
using namespace std;

//top down dp code
int wines(int dp[][10], int price[], int L, int R, int y)
{
	//base case

	if (L > R)
	{
		return 0;
	}

	//need if a state is already
	if (dp[L][R] != 0)
	{
		return dp[L][R];
	}
	//rec case

	int pick_left = y * price[L] + wines(dp, price, L + 1, R, y + 1);
	int pick_right = y * price[R] + wines(dp, price, L, R - 1, y + 1);

	return dp[L][R] = max(pick_left, pick_right);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a[] = {2, 5, 3,};
	int n = 3 ;
	int dp[10][10] = {0};

	cout << wines(dp, a, 0, n - 1, 1) << endl;

	return 0;
}
