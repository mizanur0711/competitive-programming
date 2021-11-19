#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        x=x+arr[n-1]-arr[i];
    }
    cout<<x<<endl;
}
