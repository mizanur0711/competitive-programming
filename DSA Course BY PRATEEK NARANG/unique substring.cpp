#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string unique_substring(string s)
{
	int i = 0;
	int j = 0;

	int window_len = 0;
	int max_window_len = 0;
	int start_window = -1;

	unordered_map<char, int> m;

	while (j <  s.size())
	{
		char ch = s[j];

		//if it is inside hash map and & its index lower than current window
		if (m.count(ch) && m[ch] >= i)
		{
			i = m[ch] + 1;
			window_len = j - i; //update remaining window len excluding current char

		}
		//update last char
		m[ch] = j;
		window_len++;
		j++;

		//updating max_window_len
		if (window_len > max_window_len)
		{
			max_window_len = window_len;
			start_window = i;
		}
	}

	return s.substr(start_window, max_window_len);
}
int main()
{
	string str;
	cin >> str;
	cout << unique_substring(str) << endl;

}