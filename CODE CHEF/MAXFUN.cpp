#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,mx=0;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<=n-2;i++)
        {
            mx=max(mx,abs(arr[0]-arr[i])+abs(arr[i]-arr[n-1])+abs(arr[n-1]-arr[0]));
        }
        cout<<mx<<endl;
    }
    return 0;
}
