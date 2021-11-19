#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],x,y;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        arr[x-2]=arr[x-2] +y-1;
        arr[x]=arr[x]+arr[x-1]-y;
        arr[x-1]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
