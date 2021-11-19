#include<bits/stdc++.h>
using namespace std;
int x=1000010;
vector<bool> prime(x+1, true);

void sieve()
{

    int x=1000010;
    prime[0]=prime[1]=false;
    for(int i=2;i<=x;i++)
    {
        if(prime[i] && (long long)i * i <= x)
        {
         for(int j=i*i;j<=x;j+=i)
         {
             prime[j]=false;
         }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    sieve();
    while(t--)
    {
        long long s,n;
        cin>>n;
        s=sqrt(n);
        if(prime[s]==true && (long long)s*s==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

