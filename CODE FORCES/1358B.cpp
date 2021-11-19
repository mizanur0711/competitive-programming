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
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int temp=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=i+1)
            {
                temp=i+1;
            }
        }
        cout<<temp+1<<endl;
    }
    return 0;

}
