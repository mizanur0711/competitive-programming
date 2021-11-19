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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans=0;
        for(int l=0,r=n-1;l<=r;)
        {
            if(arr[r]>=k)
            {
                ans++;
              //   cout<<arr[r]<<"r ";
                r--;
            }
            else if(arr[l]>=k)
            {
                ans++;
              //  cout<<arr[l]<<"l ";
                l++;
            }
            else if(arr[l]+arr[r]>=k && l!=r)
            {
               // cout<<arr[l]<<" "<<arr[r]<<"  ";
                l++;
                r--;
                ans++;
            }
            else
            {
                l++;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}
