#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        bool flag=true;
        for(int i=1;i<=n-2;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1] )
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
