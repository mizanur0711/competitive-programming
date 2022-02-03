#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	priority_queue<int> leftheap ;//max heap
	priority_queue<int, vector<int>, greater<int>>rightheap; // min heap

	int d;
	cin >> d;

	leftheap.push(d);

	float med = d;

	cout << med << " ";
	cin >> d;
	while (d != -1)
	{
		//left or right or eqaual

		if (leftheap.size() > rightheap.size())
		{
			if (d > med)
			{
				rightheap.push(d);
			}
			else
			{
				rightheap.push(leftheap.top());
				leftheap.pop();
				leftheap.push(d);
			}
			med = (leftheap.top() + rightheap.top()) / 2.0;
		}

		else if (leftheap.size() == rightheap.size())
		{
			if (d < med)
			{
				leftheap.push(d);
				med = leftheap.top();
			}
			else
			{
				rightheap.push(d);
				med = rightheap.top();
			}
		}
		else
		{
			if (d < med)
			{
				leftheap.push(d);
			}
			else
			{
				leftheap.push(rightheap.top());
				rightheap.pop();
				rightheap.push(d);
			}
			med = (leftheap.top() + rightheap.top()) / 2.0;
		}
		cout << med << " ";
		cin >> d;
	}
	return 0;
}
