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
        long long sum=0;
        int c=0;
        for(int i=0,j=0;i<n;i++)
        {
            sum+=arr[i];
            while(sum>t)
            {
                sum-=arr[j];
                j++;
            }
            c=max(c,i-j+1);
            cout<<i<<""<<j<<endl;
        }
        cout<<c<<endl;
    }
    return 0;
}
