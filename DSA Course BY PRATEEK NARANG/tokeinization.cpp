//tokenizing a string denotes splitting a string with respect to some delimeter

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string input;
	getline(cin, input);

	//create a string stream object

	stringstream ss(input);

	string s;
	vector<string> tokens;
	while (getline(ss, s, ' '))
	{
		tokens.push_back(s);
	}

	for (auto p : tokens)
	{
		cout << p << ",";

	}
	return 0;

}