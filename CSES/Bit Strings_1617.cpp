#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lli long long int
lli power(lli a,lli b)
{
    lli res=1;
    while(b>0)
    {
        if(b%2==1)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        b/=2;
    }
    return res%mod;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long int n;
        cin>>n;
        lli ans=power(2,n);
        cout<<ans%(1000000007)<<endl;

    }
    return 0;
}
