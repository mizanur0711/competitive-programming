#include<bits/stdc++.h>
using namespace std;
long long dp[10005];
int a, b, c, d, e, f,n;
long long fn( int n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    else
    {
    dp[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007;
    return dp[n]%10000007;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,p=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;

        for(int i=0;i<=n;i++)
        {
            dp[i]=-1;
        }


   cout<<"Case "<<++p<<": "<< fn(n)% 10000007<<endl;
    }

    return 0;
}

