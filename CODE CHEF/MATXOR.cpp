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
        long long n,m,k;
        cin>>n>>m>>k;
        long long ans=(k+2)^(k+n+m);
        if((n*m)%2)
        {
            int x=3;
            while(x<=(n*m))
            {
                if(x%2==1)
                {
                    ans=ans^(k+x);
                }
                x++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
