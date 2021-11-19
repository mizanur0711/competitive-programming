#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>t;
    while(t--)
    {
    string s,s1,s2;
    cin>>s;
    n=s.size();
    if(n%2==0)
    {
        s1=s.substr(0,n/2);
        s2=s.substr(n/2,n);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        s1=s.substr(0,n/2);
        s2=s.substr(n/2+1,n);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    }
    return 0;
}
