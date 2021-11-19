#include<bits/stdc++.h>
using namespace std;
string s,s1="qwertyuiopasdfghjkl;zxcvbnm,./";
char x;
int main()
{
    cin>>x;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
    cout<<s1[s1.find(s[i])-(x=='R')+(x=='L')];
    }
    cout<<endl;
    return 0;
}
