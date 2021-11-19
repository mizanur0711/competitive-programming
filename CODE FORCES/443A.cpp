#include<bits/stdc++.h>
using namespace std;
int ht[25];
int main()
{
    string s;
    getline(cin,s);
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            ht[s[i]-97]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(ht[i]!=0)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
