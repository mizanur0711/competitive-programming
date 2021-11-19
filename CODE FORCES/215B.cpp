#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int k;
    cin>>k;
    int arr3[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr3[i];
    }
    double a,b;
    cin>>a>>b;
    sort(arr,arr+n);
    sort(arr2,arr2+m);
    sort(arr3,arr3+k);
    double ans=arr[n-1]*sqrt((b*arr2[m-1])/(b*arr2[m-1]+a*arr3[0]));
    cout<<fixed<<setprecision(12)<<ans<<endl;

}
