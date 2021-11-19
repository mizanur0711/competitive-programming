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
        long long n,k,cur,ans=0;
        cin>>n>>k>>cur;
        for(int i=1;i<n;i++)
        {
            long long temp;
            cin>>temp;
            if(temp*100>cur*k)
            {
                long long val=(temp*100+k-1)/k;
                ans=ans+val-cur;
                cur=val;
            }
            cur+=temp;
        }

        cout<<ans<<endl;

    }

    return 0;
}

