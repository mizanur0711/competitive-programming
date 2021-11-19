#include<bits/stdc++.h>
using namespace std;
bool ht[200010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;

        for(int i=0;i<n-1;i++)
        {
            int x;
            cin>>x;
            ht[x]=1;
        }
        for(int i=1;i<=n;i++)
        {
            if(ht[i]!=1)
            {
                cout<<i<<endl;
                return 0;
            }
        }

    }
    return 0;
}
