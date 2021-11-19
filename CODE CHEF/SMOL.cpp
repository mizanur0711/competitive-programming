#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,ans;
        cin>>n>>k;
        ans=n;
        if(k<=n && k>0)
        {
            ans=n%k;
        }
        cout<<ans<<endl;
    }

    return 0;
}

