#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dp[100];
    for(int i=0;i<100;i++)
    {
        dp[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+(i)*4;
    }
    cout<<dp[n-1]<<endl;
    return 0;
}


