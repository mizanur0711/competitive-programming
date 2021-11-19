#include <bits/stdc++.h>
using namespace std;
int count_subsets(vector<int> arr, int n, int i, int x)
{
	//base case
	if (i == n)
	{
		if (x == 0)
		{
			return 1;
		}
        return 0;
	}

	//rec case

	int inc = count_subsets(arr, n, i + 1, x - arr[i]);
	int exc = count_subsets(arr, n, i + 1, x);
	return inc + exc;
}

int main()
{
	vector<int> arr{1, 2, 3, 4, 5};
	int x = 6;

	cout << count_subsets(arr, arr.size(), 0, x) << endl;
	return 0;
}
