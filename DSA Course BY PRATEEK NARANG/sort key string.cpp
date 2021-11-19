#include<bits/stdc++.h>
using namespace std;

string exTokenAtKey(string str, int key)
{
	char *s = strtok((char*)str.c_str(), " ");
	while (key > 1)
	{
		s = strtok(NULL, " ");
		key--;
	}
	return (string)s;
}

int convertToInt(string ss)
{
	int ans = 0;
	int p = 1;
	int len = ss.size();
	for (int i = len - 1; i >= 0; i--)
	{
		ans += ((ss[i] - '0') * p);
		p = p * 10;
	}
	return ans;
}
bool LexicoComp(pair<string, string> s1, pair<string, string> s2)
{
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return key1 < key2;

}
bool NumericComp(pair<string, string> s1, pair<string, string> s2)
{
	string key1, key2;
	key1 = s1.second;
	key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);
}



int main()
{
	int n;
	cin >> n;
	cin.get();
	string temp;
	vector<string> s;

	for (int i = 0; i < n; i++)
	{
		getline(cin, temp);
		s.push_back(temp);
	}

	int key;
	string rev, ordering;
	cin >> key;
	cin >> rev >> ordering;

	vector< pair<string, string> > vp;

	//this will extract token from string on basis of key
	for (int i = 0; i < n; i++)
	{
		vp.push_back({s[i], exTokenAtKey(s[i], key)});
	}

	//sorting

	if (ordering == "numeric")
	{
		sort(vp.begin(), vp.end(), NumericComp);
	}
	else
	{
		sort(vp.begin(), vp.end(), LexicoComp);
	}

	//reversal
	if (rev== "true")
	{
		reverse(vp.begin(),vp.end());
	}

	//printing
	for (int i = 0; i < n; i++)
	{
		cout << vp[i].first << endl;
	}
	return 0;
}
