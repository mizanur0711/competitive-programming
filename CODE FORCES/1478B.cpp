#include<bits/stdc++.h>
using namespace std;
bool dp[210];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int q,d;
        cin>>q>>d;
        dp[0]=1;
        for(int i=1;i<=210;i++)
        {
            dp[i]=0;
        }
        if(!d)
        {
            d+=10;
        }
        int mx=d*10;
        for(int i=0;10*i+d<=mx;i++)
        {
            for(int j=0;10*i+d+j<=mx;j++)
            {
                dp[10*i+d+j]=dp[10*i+d+j]+dp[j];
              //  cout<<10*i+d+j<<" "<<dp[10*i+d+j]<<" "<<j<<endl;
            }
        }
        while(q--)
        {
            int x;
            cin>>x;
            if(x>=mx || dp[x])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}

