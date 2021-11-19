#include <bits/stdc++.h>
using namespace std;

int merge(vector <int> &array, int s, int e) {
	int cnt = 0;
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;

	vector<int> temp;

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

	int k = 0;
	for (int idx = s; idx <= e; idx++)
	{
		array[idx] = temp[k++];
	}
	return cnt;
}

//sorting method
int inversion_count(vector< int > &array, int s, int e) {
	//base case
	if (s >= e)
	{
		return 0;
	}
	int mid = (s + e) / 2;
	int C1 = inversion_count(array, s, mid);
	int C2 = inversion_count(array, mid + 1, e);
	int C3 = merge(array, s, e);

	return C1 + C2 + C3;
}
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		cout << endl;
		int n;
		cin >> n;
		vector<int >arr;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			arr.push_back(x);
		}
		int s = 0;
		int e = n - 1;
		cout << inversion_count(arr, s, e) << endl;
	}
	cout << endl;
	return 0;
}