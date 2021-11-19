#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,mx=0;
        cin>>n;
        while(n--)
        {
            int s,p,v;
            cin>>s>>p>>v;
            mx=max(((p/(s+1))*v),mx);
        }
        cout<<mx<<endl;
    }
    return 0;
}
