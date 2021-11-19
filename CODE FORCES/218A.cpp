#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[205];
    n=2*n+1;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=2;i<=n;i=i+2)
    {
        if(arr[i]-1>arr[i-1] && arr[i]-1>arr[i+1] && k!=0)
        {
            arr[i]=arr[i]-1;
            k--;
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
