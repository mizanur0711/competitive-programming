#include<bits/stdc++.h>
using namespace std;
void subsequence(string s, string o, vector<string> &v)
{
	//base case
	if (s.size() == 0)
	{
		v.push_back(o);
		return;
	}
	char c = s[0];
	string reduced_input = s.substr(1);
	//included call
	subsequence(reduced_input, o + c, v);
	//excluded call
	subsequence(reduced_input, o, v);
}
bool compare(string s1, string s2)
{
	if (s1.size() == s2.size())
	{
		return s1 < s2;
	}
	return s1.size() < s2.size();
}

int main()
{
	string str, output;
	cin >> str;
	vector<string> v;
	output = "";
	subsequence(str, output, v);
	sort(v.begin(), v.end(), compare);
	for (auto p : v)
	{
		cout << p << ",";
	}
	return 0;

}