#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long ans,a,b;
    while(t--)
    {
        ans=0;
        cin>>a>>b;
        if(a%b>0)
        {
        ans=b-(a%b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
