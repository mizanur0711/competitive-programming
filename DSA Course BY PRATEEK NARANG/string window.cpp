#include<bits/stdc++.h>
using namespace std;
string stringwindow(string s, string p)
{
	//array as a freq map
	int FP[25] = {0};
	int FS[25] = {0};

	//for storing patter string freq
	for (int i = 0; i < p.size(); i++)
	{
		int x = p[i] - 'a';
		FP[x]++;
	}

	//now sliding
	int cnt = 0;
	int start = 0;
	int min_so_far = INT_MAX;
	int start_idx = -1;

	for (int i = 0; i < s.size(); i++)
	{
		int y = s[i] - 'a';
		FS[y]++;

		//counting how many character are matching
		if (FP[y] != 0 && FS[y] <= FP[y])
		{
			cnt++;
		}

		//checking wether patern count matched
		//then we will contraction for making short
		if (cnt == p.size())
		{
			cout << i << " " << endl;
			while (FP[s[start] - 'a'] == 0  || FS[s[start] - 'a'] > FP[s[start] - 'a'])
			{
				cout << i << " " << endl;
				FS[s[start] - 'a']--;
				start++;
			}

			//note window size
			int window_size = i - start + 1;
			if (window_size < min_so_far)
			{
				min_so_far = window_size;
				start_idx = start;
			}

		}

	}
	if (start_idx == -1)
	{
		return "NO window found";
	}
	else
	{
		return s.substr(start_idx, min_so_far);
	}

}
int main()
{
	string str, p;
	cin >> str >> p;
	cout << stringwindow(str, p) << endl;
	return 0;
}