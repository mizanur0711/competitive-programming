#include<bits/stdc++.h>
using namespace std;
long long int g_s(long long int x)
{
    long long int g=0;
     while(x>0)
        {
            g+=(x%10);
            x=x/10;
        }
        return g;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int g=g_s(n);
        while(__gcd(n,g)<=1)
        {
           // cout<<n<<" "<<g<<endl;
            n++;
            g=g_s(n);
        }
        cout<<n<<endl;
    }
    return 0;
}
