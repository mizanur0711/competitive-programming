#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    int mx=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        arr[a]+=c;
        arr[b]-=c;
    }
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {
            ans+=arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}
