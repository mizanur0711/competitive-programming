#include<bits/stdc++.h>
using namespace std;
long long mx,mn;
int main()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(int i=0;i<n;i++)
    {
        if(!i)
        {
            mn=abs(arr[i]-arr[i+1]);
            mx=abs(arr[i]-arr[n-1]);
        }
        else if(i==n-1)
        {
            mn=abs(arr[i]-arr[i-1]);
            mx=abs(arr[i]-arr[0]);
        }
        else
        {
            mn=min(abs(arr[i]-arr[i+1]),abs(arr[i]-arr[i-1]));
            mx=max(mx=abs(arr[i]-arr[0]),abs(arr[i]-arr[n-1]));
        }
        cout<<mn<<" "<<mx<<endl;

    }
    return 0;
}
