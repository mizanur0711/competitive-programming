#include<bits/stdc++.h>
using namespace std;
void generateBrackets(string output, int n, int open, int close, int i)
{
	if (i == 2 * n)
	{
		cout << output << endl;
		return;
	}

	//open
	if (open < n)
	{
		generateBrackets(output + '(', n, open + 1, close, i + 1);
	}

	//close

	if (close < open)
	{
		generateBrackets(output + ')', n, open, close + 1, i + 1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string output;
		generateBrackets(output, n, 0, 0, 0);
	}

	return 0;
}