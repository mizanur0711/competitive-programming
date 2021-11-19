#include<bits/stdc++.h>
using namespace std;
string keypad[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

void printKeypadOutput(string input, string output, int i = 0) {
	if (input[i] == '\0')
	{
		cout << output << endl;
		return;
	}

	//edge case/rec case

	int current_digit = input[i] - '0';
	if (current_digit == 0 || current_digit == 1)
	{
		printKeypadOutput(input, output, i + 1);
	}

	///keypad

	for (int k = 0; k < keypad[current_digit].size(); k++)
	{
		printKeypadOutput(input, output + keypad[current_digit][k], i + 1);
	}
	return;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		string input;
		cin >> input;
		string output;
		printKeypadOutput(input, output);
		output.clear();
	}

	return 0;
}