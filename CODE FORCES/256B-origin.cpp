#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c=arr[0]+1;
        for(int i=0;i<n-1;i++)
        {
            c=c+abs(arr[i]-arr[i+1])+2;
        }
     cout<<c<<endl;

    }
    return 0;
}
