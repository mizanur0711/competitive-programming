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
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            cout<<n+k*2<<endl;
        }
        else
        {
            int s=0;
            for(int i=2;i<=n;i++)
            {
                if(n%i==0)
                {
                    s=i;
                    k--;
                    break;
                }
            }
            cout<<n+s+k*2<<endl;
        }
    }

    return 0;
}
