#include<bits/stdc++.h>
using namespace std;
bool prime[100000+5];
void Sieve()
{
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=100005; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=100005; i += p)
            prime[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    Sieve();
    while(t--)
    {
        int d;
        cin>>d;
        int c=2;
        long long ans=1;
        long long temp=1;
        for(int i=2;i<=100005;i++)
        {
            if(prime[i])
            {
                if(i-temp>=d && c>0)
                {
                    ans=ans*i;
                    temp=i;
                    c--;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

