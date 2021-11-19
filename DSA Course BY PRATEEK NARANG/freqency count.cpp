#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int >arr, int key) {

	int s = 0;
	int e = arr.size();

	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] == key)
		{
			ans = mid;
			e = mid - 1;

		}
		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;

}

int upper_bound(vector<int >arr, int key) {
	int s = 0;
	int e = arr.size();

	int ans = -1;

	while (s <= e) {
		int mid = (s + e) / 2;

		if (arr[mid] == key)
		{
			ans = mid;
			s = mid + 1;

		}
		else if (arr[mid] > key)
		{
			e = mid - 1;
		}
		else {
			s = mid + 1;
		}
	}

	return ans;


}



int main() {
	vector<int> v{0, 1, 1, 1, 1, 2, 2, 2, 3, 4, 4, 5, 10};

	cout << upper_bound(v, 1) - lower_bound(v, 1) + 1 << endl;

	//STl
	cout << upper_bound(v.begin(), v.end(), 1) - lower_bound(v.begin(), v.end(), 1) << endl;

	return 0;


}