#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        if(n>=2020)
        {
            long long k=0,ans=0,check=n;
            while(n>=2020)
            {
                if(n%2020==0)
                {
                    ans=n/2020;
                    break;
                }
                else
                {
                    n=n-2021;
                    k++;
                }

            }
            if((ans*2020 + k*2021)==check)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

