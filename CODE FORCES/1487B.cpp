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
        long long n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            k=k%n;
            if(k==0)
            {
                k=n;
            }
            cout<<k<<endl;

        }
        else
        {
            long long d=n/2;
            k=k+(k-1)/d;
            k=k%n;
            if(k==0)
            {
                k=n;
            }
            cout<<k<<endl;
        }

    }


    return 0;
}
