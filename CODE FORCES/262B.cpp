#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    long long sum=0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int i;
    for(i=0;i<k;i++)
    {
        if(arr[i]<0)
        {
            arr[i]=arr[i]*-1;
        }
        else
        {
            break;
        }
    }
    sort(arr,arr+n);
    if((k-i)>0 && (k-i)%2==1)
    {
        arr[0]=arr[0]*-1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;
}
