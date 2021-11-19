#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define lli long long int
lli power(lli a,lli b)  // calculate a^b
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
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int c=0;
        while(n>1)
        {
            n=n/2;
            c++;
        }
        cout<<power(2,c)-1<<endl;
    }
    return 0;
}
