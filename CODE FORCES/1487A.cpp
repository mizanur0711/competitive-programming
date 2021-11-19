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
        sort(arr,arr+n);
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[0])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }


    return 0;
}
