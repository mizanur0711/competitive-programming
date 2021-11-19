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
        long long n,t;
        cin>>n>>t;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long sum=0,c=0;
        for(int i=0,j=0;i<n;i++)
        {
            if(sum+arr[i]<=t)
            {
                sum+=arr[i];
                c++;
            }
            else if(arr[j]<arr[i] && sum>=t)
            {
                sum-=arr[j];
                sum+=arr[i];
                j++;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
