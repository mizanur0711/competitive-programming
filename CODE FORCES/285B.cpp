#include<bits/stdc++.h>
using namespace std;
int vis[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n,s,t;
        cin>>n>>s>>t;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int c=0,pos=s;
        while(vis[pos]==0)
        {
            if(pos==t)
            {
                cout<<c<<endl;
                return 0;
            }
            vis[pos]=1;
            pos=arr[pos];
            c++;
        }
        cout<<"-1"<<endl;

    }
    return 0;
}
