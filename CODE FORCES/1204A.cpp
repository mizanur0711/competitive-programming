#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long len=s.size()-1;
    long long x=len/2;
    bool flag=0;
    for(int i=1;i<=s.size();i++)
    {
        if(s[i]=='1')
        {
            flag=1;
        }
    }
    if(flag==1 || len%2==1)
    {
        cout<<x+1<<endl;
    }
    else
        cout<<x<<endl;
    return 0;

}
