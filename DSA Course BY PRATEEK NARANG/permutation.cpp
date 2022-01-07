#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
void permute(char *a, int l, int r )
{
	int i;
	if (l == r)
	{
		cout << a << endl;
	}
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap((a + l), (a + i));
			permute(a, l + 1, r);
			swap((a + l), (a + i));
		}
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
		char str[] = "ABCD";
		int n = strlen(str);
		permute(str, 0, n - 1);
	}

	return 0;
}