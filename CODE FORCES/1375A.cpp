#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(int i=0;i<n-1;i++)
     {
         if(arr[i+1]-arr[i]<0)
         {
             arr[i+1]=arr[i+1]*(-1);
         }
         else if(arr[i+1]-arr[i]>0)
         {
             arr[i+1]=arr[i+1]*(-1);
         }
     }
        for(int i=0;i<n;i++)
     {
         cout<<arr[i];
     }
    }

    return 0;
}

