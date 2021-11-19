#include<bits/stdc++.h>
using namespace std;
bool cmp(string x,string y)
{
    return x.size()<y.size();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string s[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    sort(s,s+n,cmp);

    for(int i=0;i<n-1;i++)
    {

        if(s[i+1].find(s[i])==string :: npos)
        {
            cout<<"NO"<<endl;
            return 0;
        }

    }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
    return 0;
}

