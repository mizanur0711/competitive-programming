#include<bits/stdc++.h>
using namespace std;
int c[100050];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n+1],y[n+1],h[n+1],a[n+1];
        for(int i=1;i<n+1;i++)
        {
            cin>>x[i]>>y[i];
            h[i]=a[i]=0;
        }

        for(int i=1;i<n+1;i++)
        {
            c[x[i]]++;
        }
        for(int i=1;i<n+1;i++)
        {
            h[i]=n-1;
            h[i]+=c[y[i]];
            a[i]=2*(n-1)-h[i];
        }
        for(int i=1;i<n+1;i++)
        {
            cout<<h[i]<<" "<<a[i]<<endl;
        }
    }
    return 0;
}
