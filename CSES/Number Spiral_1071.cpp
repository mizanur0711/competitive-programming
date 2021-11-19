#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        long long x,y,ans;
        cin>>x>>y;
        if(x>=y)
        {
            if(x%2==0)
            {
                ans=(x*x)-y+1;
            }
            else
            {
                ans=(x-1)*(x-1)+y;
            }
        }
        else
        {
            if(y%2==0)
            {
                ans=(y-1)*(y-1)+x;
            }
            else
            {
                ans=(y*y)-x+1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
