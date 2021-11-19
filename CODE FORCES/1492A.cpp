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
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        long long ans=10e18+5,temp=0;
        long long x=(p/a);
            if(x<=0)
            {
                x=1;
            }
        while(1)
        {
            if(x*a-p>=0)
            {
            ans=min(x*a-p,ans);
            }
            x++;
            if(x*a-p>=ans)
            {
                break;
            }
        }
         x=(p/b);
            if(x<=0)
            {
                x=1;
            }
        while(1)
        {
            if(x*b-p>=0)
            {
            ans=min(x*b-p,ans);
            }
            x++;
            if(x*b-p>=ans)
            {
                break;
            }
        }
         x=(p/c);
            if(x<=0)
            {
                x=1;
            }
        while(1)
        {
           if(x*c-p>=0)
            {
            ans=min(x*c-p,ans);
            }
            x++;
            if(x*c-p>=ans)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

