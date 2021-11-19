//not clear
#include <bits/stdc++.h>
using namespace std;
void min_pair(vector<int>a1, vector<int> a2) {
	//sort the second arr
	sort(a2.begin(), a2.end());
	int diff = INT_MAX;
	int p1, p2;

	//iterate over a1 array and look for closes element in the second array
	for (int x : a1 )
	{
		auto lb = lower_bound(a2.begin(), a2.end(), x) - a2.begin();

		if (lb >= 1 and x - a2[lb - 1] < diff)
		{
			diff = x - a2[lb - 1];
			p1 = x;
			p2 = a2[lb - 1];
		}
		//greater/right
		if (lb != a2.size() && a2[lb] - x < diff)
		{
			diff = a2[lb] - x;
			p1 = x;
			p1 = a2[lb];
		}
	}
	cout << p1 << " " << p2 << endl;
	return;
}

int main()
{
	vector<int> A{ -1, 5, 10, 20, 3};
	vector<int> B{26, 134, 135, 15, 17};

	min_pair(A, B);

	return 0;
}