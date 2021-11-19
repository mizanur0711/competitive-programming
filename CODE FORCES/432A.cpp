#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,c=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i=i+3)
    {
        if(arr[i]+k<=5 && arr[i+1]+k<=5 && arr[i+2]+k<=5 )
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

