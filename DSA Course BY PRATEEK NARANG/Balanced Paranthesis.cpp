#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string input)
{
	stack<char> s;
	for (int i = 0; i < input.size(); i++)
	{
		char ch = input[i];
		switch (ch) {
		case '(':
		case '{':
		case '[': s.push(ch);
			break;
		case ')': if (!s.empty() and s.top() == '(')
			{
				s.pop();
			}
			else {
				return false;
			}
			break;
		case '}': if (!s.empty() and s.top() == '{')
			{
				s.pop();
			}
			else {
				return false;
			}
			break;
		case ']': if (!s.empty() and s.top() == '[')
			{
				s.pop();
			}
			else {
				return false;
			}
			break;
		default : continue;
		}
	}
	if (s.empty())
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s = "((a+b+c+[d])";
	if (isBalanced(s))
	{
		cout << "Balanced!" << endl;
	}
	else
	{
		cout << "Not Balanced " << endl;
	}

	return 0;

}


