#include<bits/stdc++.h>
using namespace std;
long long mx=0,arr[500005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0,j=n;i<n;i++,j--)
    {
        long long x=j*arr[i];
        mx=max(mx,x);
    }
    cout<<mx<<endl;
    return 0;
}
