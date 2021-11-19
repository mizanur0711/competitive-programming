#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,k;
    cin>>t;
    while(t--)
    {
        long long ans=0;
        cin>>a>>b>>k;
        if(k%2==1)
        {
            ans=a*((k/2)+1)- b*(k/2);
            cout<<ans<<endl;
        }
        else
        {
         ans=a*(k/2)- b*(k/2);
         cout<<ans<<endl;
        }

    }
    return 0;
}
