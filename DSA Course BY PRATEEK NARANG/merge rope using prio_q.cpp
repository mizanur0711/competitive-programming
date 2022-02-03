#include<bits/stdc++.h>
using namespace std;

int join_ropes(int ropes[], int n)
{
	//min heap
	priority_queue<int, vector<int>, greater<int>> min_heap(ropes, ropes + n);

	int cost = 0;

	while (min_heap.size() > 1)
	{
		int A = min_heap.top();
		min_heap.pop();

		int B = min_heap.top();
		min_heap.pop();

		int new_rope = A + B;

		cost += new_rope;
		min_heap.push(new_rope);
	}
	return cost;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n = 4;
	int ropes[] = {4, 3, 2, 6};

	cout << join_ropes(ropes, n) << endl;



	return 0;
}
