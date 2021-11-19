#include <bits/stdc++.h>
using namespace std;

long long merge(vector <long long> &array, long long s, long long e) {
	long long cnt = 0;
	long long i = s;
	long long m = (s + e) / 2;
	long long j = m + 1;

	vector<long long> temp;

	while (i <= m && j <= e)
	{
		if (array[i] < array[j])
		{
			temp.push_back(array[i]);
			i++;
		}
		else {
			cnt += (m - i + 1);
			temp.push_back(array[j]);
			j++;
		}
	}

	//copy rem elements from the first array
	while (i <= m)
	{
		temp.push_back(array[i++]);
	}
	//or copy rem elements from second array
	while (j <= e) {
		temp.push_back(array[j++]);
	}

	long long k = 0;
	for (long long idx = s; idx <= e; idx++)
	{
		array[idx] = temp[k++];
	}
	return cnt;
}

//sorting method
long long inversion_count(vector< long long > &array, long long s, long long e) {
	//base case
	if (s >= e)
	{
		return 0;
	}
	long long mid = (s + e) / 2;
	long long C1 = inversion_count(array, s, mid);
	long long C2 = inversion_count(array, mid + 1, e);
	long long C3 = merge(array, s, e);

	return C1 + C2 + C3;
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		cout << endl;
		long long n;
		cin >> n;
		vector<long long >arr;
		for (long long i = 0; i < n; i++)
		{
			long long x;
			cin >> x;
			arr.push_back(x);
		}
		long long s = 0;
		long long e = n - 1;
		cout << inversion_count(arr, s, e) << endl;
	}
	cout << endl;
	return 0;
}