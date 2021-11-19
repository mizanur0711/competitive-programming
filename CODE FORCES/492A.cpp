#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,l;
    cin>>n>>l;
    int arr[n],maxdis=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        maxdis=(double)max(arr[i]-arr[i-1],maxdis);

    }
    double ans=(double)max(maxdis,2*max(arr[0],l-arr[n-1]));

    cout<<fixed<<setprecision(10)<<ans/2.0<<endl;

    return 0;
}

