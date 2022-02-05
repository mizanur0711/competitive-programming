#include<bits/stdc++.h>
using namespace std;

string s = "thequickbrownfoxjumpsoverthehighbridge";

string words[] = {"the", "fox", "thequickbrownfox", "jumps", "lazy", "lazyfox",
                  "highbridge", "the", "over", "bridge", "high", "tall",
                  "quick", "brown"
                 };


int min_bars_helper(string s, string words[], int idx, unordered_set<string> &m)
{
	//base case
	if (s[idx] == '\0')
	{
		return 0;
	}

	//rec case
	int ans = INT_MAX;

	string current_string = "";

	for (int j = idx; s[j] != '\0'; j++)
	{
		current_string += s[j];

		//at every step you can whether this prefix is present in set

		if (m.find(current_string) != m.end())
		{
			int remaining_ans = min_bars_helper(s, words, j + 1, m);
			if (remaining_ans != -1)
			{
				ans = min(ans, 1 + remaining_ans);
			}
		}
	}


	if (ans == INT_MAX)
	{
		return -1;
	}
	return ans;

}

int min_bars() {

	unordered_set<string> m ;
	for ( string w : words)
	{
		m.insert(w);
	}

	//recursive helper func

	int output = min_bars_helper(s, words, 0, m);

	return output - 1;

}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << min_bars() << endl;
	return 0;
}
