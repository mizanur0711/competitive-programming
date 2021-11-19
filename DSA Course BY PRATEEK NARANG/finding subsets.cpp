#include <bits/stdc++.h>
using namespace std;
void subsets(string s, string sp, vector<string> &v) {
	if (s.size() == 0)
	{
		v.push_back(sp);
		return;
	}
	char c = s[0];

	string reducedString = s.substr(1);
	// including c;
	subsets(reducedString, sp + c, v);

	//excluding c
	subsets(reducedString, sp, v);
}

int main()
{
	string s;
	cin >> s;
	string sp = "";
	vector<string> v;
	subsets(s, sp, v);
	for (auto x : v)
	{
		cout << x << ",";
	}
	return 0;

}