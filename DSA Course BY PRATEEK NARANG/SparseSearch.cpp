#include <bits/stdc++.h>
using namespace std;
int sparse_search(string a[], int n, string key)
{
	int s = 0;
	int e = n - 1;

	while (s <= e)
	{
		int mid = (s + e) / 2;
		int mid_left = mid - 1;
		int mid_right = mid + 1;

		if (a[mid] == "")
		{
			//here we need to update mid to nearest
			while (1)
			{
				if (mid_left < s && mid_right > e)
				{
					return -1;
				}
				else if (mid_right <= e && a[mid_right] != "")
				{
					mid = mid_right;
					break;
				}
				else if (mid_left >= s && a[mid_left] != "")
				{
					mid = mid_left;
					break;
				}
				mid_left--;
				mid_right++;
			}
		}
		if (a[mid] == key)
		{
			return mid;
		}
		else if (a[mid] > key)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}

	}
	return -1;
}

int main()
{

	string arr[] = {"ai", "", "", "bat", "", "", "", "e"};
	int n = 8;
	string c;
	cin >> c;
	cout << sparse_search(arr, n, c) << endl;
	return 0;
}