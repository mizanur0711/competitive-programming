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
		long long int n, l, r, k;
		cin >> n >> l >> r >> k;
		long long int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] >= l && arr[i] <= r && k - arr[i] >= 0)
			{
				c++;
				k -= arr[i];
			}
		}
		cout << c << endl;
	}
	return 0;
}
