#include<bits/stdc++.h>
using namespace std;
double arr[5005];
int main()
{
    double n,k,arr[5005];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    double mx=0,sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+k-1;j<=n;j++)
        {
            sum=arr[j]-arr[i-1];
        sum=(double)sum/(double)(j-i+1);
        mx=max(sum,mx);
        }

    }
    cout<<fixed<<setprecision(15);
    cout<<mx<<endl;
    return 0;
}
