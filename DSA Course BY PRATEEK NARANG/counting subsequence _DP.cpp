#include<bits/stdc++.h>
using namespace std;
//top down dp code
int countSub(string a, string b, int m, int n)
{
	//base case
	if (m == -1 && n == -1 || n == -1)
	{
		return 1;
	}
	if (m == -1)
	{
		return 0;
	}

	if (a[m] == b[n])
	{
		return countSub(a, b, m - 1, n - 1) + countSub(a, b, m - 1, n);
	}

	return countSub(a, b, m - 1, n);
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a = "abcecdg";
	string b = "abc";

	cout << countSub(a, b, a.size() - 1, b.size() - 1) << endl;


	return 0;
}
