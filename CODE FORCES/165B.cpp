#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,k;
bool check(ll x)
{
    ll sum=x,temp=k;
    while(1)
    {
        sum=sum+(x/temp);
        temp=temp*k;
        if((x/temp)==0)
            break;
    }
    if(sum>=n)
        return 1;
    else
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>k;
    ll hi=2e18,lo=1,mid;
    while(lo<hi)
    {
        mid=lo+(hi-lo)/2;
        if(check(mid)==1)
        {
            hi=mid;
        }
        else
        {
            lo=mid+1;
        }

    }
    cout<<hi<<endl;
    return 0;
}

