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
        int n,m;
        cin>>n>>m;
        long long arr[n][m],sum=0,mn=1e3,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
            cin>>arr[i][j];
            if(arr[i][j]<0)
            {
                c++;
            }
            sum=sum+abs(arr[i][j]);
            mn=min(abs(arr[i][j]),mn);
            }
       }
       if(c&1)
       {
           cout<<sum-mn*2<<endl;
       }
       else
       {
           cout<<sum<<endl;
       }
    }
    return 0;
}

