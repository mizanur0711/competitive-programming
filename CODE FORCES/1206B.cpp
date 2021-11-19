#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n,m=0,z=0;
        long long ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            {
                m++;
            }
            if(arr[i]==0)
            {
                z++;
            }
        }

            for(int i=0;i<n;i++)
            {
                if(arr[i]>0)
                {
                    ans+=arr[i]-1;
                }
                else
                {
                     ans+=abs(arr[i]+1);
                }
            }
            if(m%2==1 && z==0)
            {
                ans+=2;
            }
     cout<<ans<<endl;
    }
    return 0;
}
