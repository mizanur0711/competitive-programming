#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+n);
    for(int i=0;i<n;i=i+2)
    {
        if(arr[i]!=arr[i+1])
        {
            sum=sum+arr[i+1]-arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}

