class Solution {
public:
    string simplifyPath(string path) {
        stack<string > cpath;
        string ans = "";

        for (int i = 0; i < path.size(); i++)
        {
            if (path[i] == '/')
            {
                continue;
            }
            string temp;
            while (path[i] != '/' && i < path.size())
            {
                temp += path[i];
                i++;
            }
            if (temp == ".")
            {
                continue;
            }
            else if (temp == "..")
            {
                if (!cpath.empty())
                {
                    cpath.pop();
                }
            }
            else
            {
                cpath.push(temp);
            }

        }
        while (!cpath.empty())
        {
            ans = "/" + cpath.top() + ans;
            cpath.pop();
        }

        if (ans.size() == 0)
        {
            return "/";
        }
        else
        {
            return ans;
        }


    }
};