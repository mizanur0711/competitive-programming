#include <bits/stdc++.h>
using namespace std;
bool cmp(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
    {
       return true;
    }
    if (n2 < n1)
    {
       return false;
    }

    for (int i=0;i<n1;i++)
    {
        if(str1[i]<str2[i])
        {
        return true;
        }
        if (str1[i] > str2[i])
        {
        return false;
        }
    }
    return false;
}


int main()
{
   int n;
   cin >> n;
   vector<string> s;
   for(int i=0;i<n;i++)
   {
    string s1;
    cin>>s1;
    s.push_back(s1);
   }
    sort(s.begin(),s.end(),cmp);
    for(int i=0;i<s.size();i++)
   {
        cout<<s[i]<<endl;
   }

   return 0;
}
