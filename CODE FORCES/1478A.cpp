#include<bits/stdc++.h>
using namespace std;
int ht[105],arr[105];;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ht[i]=0;
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            ht[arr[i]]++;
            ans=max(ans,ht[arr[i]]);
        }
        cout<<ans<<endl;
    }

    return 0;
}

