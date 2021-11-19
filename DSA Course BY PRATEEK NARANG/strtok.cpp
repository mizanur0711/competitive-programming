//tokenizing using strtok
#include<bits/stdc++.h>
using namespace std;
int main()
{
	char input[10000];
	cin.getline(input, 10000);

	//strtok
	char *token = strtok(input, " ");

	while (token != NULL) //this function internally maintain the state of the string we passed in the last fn call
	{
		cout << token << endl;
		token = strtok(NULL, " ");

	}
	return 0;
}