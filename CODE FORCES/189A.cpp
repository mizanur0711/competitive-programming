#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0;a*i<=n;i++)
    {
        for(int j=0;a*i+b*j<=n;j++)
        {
            int k=(n-a*i-b*j)/c;
            if(n==(a*i+b*j+c*k))
            {
                ans=max(i+j+k,ans);
            }
        }
    }



    cout<<ans<<endl;
    return 0;
    }
