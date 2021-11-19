#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long x,y,n;
        cin>>x>>y>>n;
        long long arr[7];
        arr[0]=x-y;
        arr[1]=x;
        arr[2]=y;
        arr[3]=y-x;
        arr[4]=-1*x;
        arr[5]=-1*y;
        n=n%6;
        arr[n]=arr[n]%mod;
        if(arr[n]<0)
        {
            arr[n]+=mod;
        }
        cout<<arr[n]%mod<<endl;

    }
    return 0;
}
