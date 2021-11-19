#include <bits/stdc++.h>
using namespace std;
int mod(int B,int P,int M)
{
    if(P==0)
    {
        return 1;
    }
    if(P%2==0)
    {
        int x=mod(B,P/2,M);
        return ((x*x)%M);
    }
    else
    {
        return ((B%M)*mod(B,P-1,M)%M);
    }
}

int main()
{
    int b,p,m;
    while(cin>>b>>p>>m)
    {
    cout<<mod(b,p,m)<<endl;
    }
    return 0;
}
