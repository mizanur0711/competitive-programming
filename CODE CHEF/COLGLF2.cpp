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
        int s;
        cin>>s;
        int q[s];
        long long ans=0;
        for(int i=0;i<s;i++)
        {
            cin>>q[i];
        }
        for(int i=0;i<s;i++)
        {
            int x;
            cin>>x;
            for(int j=0;j<x;j++)
            {
                int p;
                cin>>p;
                ans+=p;
                if(j>=1)
                {
                    ans-=q[i];
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

