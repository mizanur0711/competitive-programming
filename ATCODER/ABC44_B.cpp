#include<bits/stdc++.h>
using namespace std;
int ht[26];
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        ht[s[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(ht[i]%2==1)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
