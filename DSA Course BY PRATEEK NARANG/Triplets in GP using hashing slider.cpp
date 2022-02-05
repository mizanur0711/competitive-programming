#include<bits/stdc++.h>
using namespace std;
int count_triplets(vector<int>arr, int r)
{
	int n = arr.size();
	unordered_map<long, long> right, left;

	//inin the right map with freq and left with 0

	for (auto x : arr)
	{
		right[x]++;
		left[x] = 0;
	}

	int ans = 0;

	for (int i = 0; i < n; i++)
	{
		right[arr[i]]--;

		if (arr[i] % r == 0)
		{
			long long b = arr[i];
			long long a = arr[i] / r;
			long long c = arr[i] * r;

			ans += left[a] * right[c];
		}
		left[arr[i]]++;
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, r;
	cin >> n >> r;
	vector<int> arr(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << count_triplets(arr, r) << endl;

	return 0;
}
