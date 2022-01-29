#include<bits/stdc++.h>
using namespace std;

void maxSubArrayK(vector<int> a, int k)
{
	//Algorith will be in two steps
	deque<int> Q(k);

	int i;
	// 1. Process only the first k elements;
	for (i = 0; i < k; i++)
	{
		while (!Q.empty() && a[i] > a[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);

	}

	//2. remaining the elements of the array
	for (; i < a.size(); i++)
	{
		cout << a[Q.front()] << " ";
		// remove element from the left
		while (!Q.empty() && a[Q.front()] <= i - k)
		{
			Q.pop_front();
		}

		while (!Q.empty() && a[i] > a[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> arr{1, 2, 3, 1, 4, 5, 2, 3, 5};
	int k = 3;
	maxSubArrayK(arr, k);

	return 0;

}


