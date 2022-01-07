#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		lli arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 == 0)
			{
				while (arr[i] % 2 == 0)
				{
					count++;
					arr[i] = arr[i] / 2;
				}
			}
		}
		sort(arr, arr + n);

		lli sum = 0;
		for (int i = 0; i < n - 1; i++)
		{
			sum += arr[i];
		}
		sum += arr[n - 1] * (pow(2, count));
		cout << sum << endl;
	}
	return 0;
}
