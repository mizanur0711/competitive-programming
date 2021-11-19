#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>dp[i];
        dp[i]=dp[i]+dp[i-1];
    }
    long long int mn=1e15+10,ans=0;
    for(int i=1;i<=n-k+1;i++)
    {
        if(dp[i+k-1]-dp[i-1]<mn)
        {
            ans=i;
            mn=dp[k+i-1]-dp[i-1];
        }
    }
    cout<<ans<<endl;
    return 0;
}

