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
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int lo=0,hi=arr[n-1],mid,ans=0;
    while(lo<=hi)
    {
        mid=(lo+hi+1)/2;
        int cnt=1,left=0;
        for(int i=1;i<n && cnt<c;i++)
        {
            if(arr[i]-arr[left]>=mid)
            {
             cnt++;
             left=i;
            }
        }
        if(cnt>=c)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
    }

    return 0;
}

