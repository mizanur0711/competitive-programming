#include <bits/stdc++.h>
using namespace std;
bool comp(string x, string y) {
	return x + y < y + x;
}
int main() {
	string arr[] = {"a", "aba", "ab"};
	int n = 3;
	sort(arr, arr + 3, comp);
	for (auto c : arr)
	{
		cout << c;
	}
	return 0;
}
