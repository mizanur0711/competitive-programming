#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	queue<char> q;
	int freq[27] = {0};

	char ch;
	cin >> ch;

	while (ch != '.')
	{
		q.push(ch);
		freq[ch - 'a']++;

		//query -> remove all char front of queue till you get a char with freq 1

		while (!q.empty())
		{
			int idx = q.front() - 'a';
			if (freq[idx] > 1)
			{
				q.pop();
			}
			else
			{
				cout << q.front() << " ";
				break;
			}
		}
		if (q.empty())
		{
			cout << "-1 ";
		}
		cin >> ch;
	}
	return 0;

}


