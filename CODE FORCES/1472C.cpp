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
        int n;
        cin>>n;
        int arr[n+1],dp[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i]=arr[i];
            if(i+arr[i]<n)
            {
            dp[i] += dp[i+arr[i]];
            }
        }
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}

