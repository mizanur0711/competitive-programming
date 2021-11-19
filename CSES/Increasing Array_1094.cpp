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
        int n;
        cin>>n;
        int arr[n];
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i])
            {
                ans+=(arr[i]-arr[i+1]);
                arr[i+1]=arr[i];
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
