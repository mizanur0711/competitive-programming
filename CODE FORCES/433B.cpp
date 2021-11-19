#include<bits/stdc++.h>
using namespace std;
long long arr[100015];
long long sarr[100015];
long long sum[100015];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cin>>arr[0];
    sum[0]=arr[0];
    sarr[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        sarr[i]=arr[i];
        sum[i]=arr[i];
        sum[i]=sum[i]+sum[i-1];
    }
    sort(sarr,sarr+n);
    for(int i=1;i<n;i++)
    {
        sarr[i]=sarr[i]+sarr[i-1];
    }
    int q;
    cin>>q;
    while(q--)
    {
    int m,l,r;
    cin>>m>>l>>r;
    if(m==1)
    {
        cout<<sum[r-1]-sum[l-2]<<endl;
    }
    else
    {
        cout<<sarr[r-1]-sarr[l-2]<<endl;
    }
    }
    return 0;

    return 0;
}

