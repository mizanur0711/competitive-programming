#include<bits/stdc++.h>
using namespace std;
float square_root(int N, int p) {
	int s = 0;
	int e = N;
	float ans = 0;
	//Binary search 0..n
	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (mid * mid == N)
		{
			return mid;
		}
		else if (mid * mid < N)
		{
			ans = mid;
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	//linear search for each place of p
	float inc = 0.1;

	for (int i = 1; i <= p; i++)
	{
		while (ans * ans <= N)
		{
			ans += inc;
		}
		ans -= inc;

		inc = inc / 10.0;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int n, p;
		cin >> n >> p;

		cout << square_root(n, p) << endl;
	}
	return 0;

}