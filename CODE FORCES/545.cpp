#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n],h[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>h[i];
    }
    long long ans=0,p=x[0];
    ans++;
    for(int i=1;i<n;i++)
    {
        if(x[i]-h[i]>p)
        {
            p=x[i];
            ans++;
        }
        else if(i==n || x[i]+h[i]<x[i+1])
        {
            p=x[i]+h[i];
            ans++;
        }
        else
        {
            p=x[i];
        }
    }
    cout<<ans<<endl;

}
