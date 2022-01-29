#include<bits/stdc++.h>
using namespace std;

string simplifyPath(string path)
{
	//step 1. find all the token using "/" (tokenisation and filtering)
	istringstream iss(path);
	vector<string> tokens;

	string token;
	while (getline(iss, token, '/'))
	{
		if (token == "." || token == "")
		{
			continue;
		}
		tokens.push_back(token);
	}

	//2. handle ..

	vector <string> stack;

	if (path[0] == '/')
		//denotes that our path is an abs path (at root dir)
	{
		stack.push_back("");
	}

	for (string token : tokens)
	{
		if (token == "..")
		{
			//2 cases abs path or relative path
			if (stack.size() == 0 || stack[stack.size() - 1] == "..")
			{
				stack.push_back("..");
			}
			else if (stack[stack.size() - 1] != "")
			{
				stack.pop_back();
			}
		}
		else
		{
			//x,y,z
			stack.push_back(token);
		}
	}
	//single element
	if (stack.size() == 1 && stack[0] == "") {
		return "/";

	}
	//combine all elements in stack to get the answer
	ostringstream oss;
	int i = 0;
	for (auto token : stack)
	{
		if (i != 0)
		{
			oss << "/";
		}
		i++;
		oss << token;
	}
	return oss.str();
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string path = "/../x/y/../z/././w/a////../../c/./";          cout << simplifyPath(path) << endl;
	return 0;

}


