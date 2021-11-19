#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        int ans,j;
        while(k)
        {
            for(j=1;j<n && k;j++)
            {
                if(arr[j]<arr[j+1])
                {
                    arr[j]++;
                    k--;
                    if(k==0)
                    {
                        ans=j;
                    }
                    break;
                }
                if(arr[j]>=arr[j+1])
                {
                    continue;
                }
            }
            if(j==n && k>0)
            {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
