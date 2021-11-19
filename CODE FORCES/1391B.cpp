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
        int n,m,ans=0;
        cin>>n>>m;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i][m-1]=='R')
            {
                ans++;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(arr[n-1][i]=='D')
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}

