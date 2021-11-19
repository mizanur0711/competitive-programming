#include<bits/stdc++.h>
using namespace std;




int main()
{
	vector <int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
	unordered_set< int >s;
	for (auto x : arr)
	{
		s.insert(x);
	}
	int ans = 1;
	for (auto element : arr)
	{
		int parent = element - 1;

		if (s.find(parent) == s.end())
		{
			int next = element + 1;
			int c = 1;
			while (s.find(next) != s.end())
			{
				next++;
				c++;
			}
			ans = max(c, ans);
		}
	}
	cout << ans << endl;
	return 0;

}