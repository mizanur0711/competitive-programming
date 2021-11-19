#include<bits/stdc++.h>
using namespace std;
int dp[20];

//not okay -_-

int F(int n)
{

    if(n==0 || n==1)
        return n;
//    if(dp[n]!=-1)
//        return dp[n];
    else if(dp[n]==0)
    {
         dp[n]=F(n-1)+F(n-2);
         return dp[n];

    }
}
int main()
{
    int n;
//    for(int i=0;i<20;i++)
//    {
//        dp[i]=-1;
//    }
    cin>>n;
    F(n);
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
}
