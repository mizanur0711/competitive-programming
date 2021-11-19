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
        long long n,m,ans1,ans2;
        cin>>n>>m;
        if(m==1)
        {
            n--;
            ans1=(n*(n+1))/2;
            cout<<ans1<<" "<<ans1<<endl;
        }
        else
        {
            if(n%m==0)
            {
                long long x=n/m;
                x--;
                ans1=(x*(x+1))/2;
                n=n-m;
                ans2=(n*(n+1))/2;
                cout<<ans1*m<<" "<<ans2<<endl;
            }
            else
            {
                long long x=n/m,r=n%m;
                x--;
                ans1=(x*(x+1))/2;
                x++;
                n=n-m;
                m-=r;
                ans2=(n*(n+1))/2;
                cout<<ans1*m +((x*(x+1))/2)*r <<" "<<ans2<<endl;

            }
        }
    }
    return 0;
}
