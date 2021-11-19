#include<bits/stdc++.h>
using namespace std;
void housing(int *arr, int n, int k)
{
	int i = 0;
	int j = 0;
	int cs = 0;
	while (j < n)
	{
		//expand
		cs += arr[j];
		j++;
		//contraction
		while (cs > k && i < j)
		{
			cs -= arr[i];
			i++;
		}

		if (cs == k)
		{
			cout << i << " " << j - 1 << endl;
		}
	}
	return;
}


int main()
{
	int plots[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1};
	int n = sizeof(plots) / sizeof(int);
	int k = 8;

	housing(plots, n, k);

	return 0;
}