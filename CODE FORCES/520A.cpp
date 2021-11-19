#include<bits/stdc++.h>
using namespace std;
bool mark[26];
int main()
{
    int n,counter=0;
    cin>>n;
    string s;
    cin>>s;
    if(n<25)
    {
        cout<<"NO"<<endl;
    }
    else
    {

    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            mark[s[i]-'a']=true;
        }
        if(s[i]>='A' && s[i]<='Z')
        {
            mark[s[i]-'A']=true;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(mark[i]==true)
        {
            counter++;
        }
    }
    if(counter==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
