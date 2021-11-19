#include<bits/stdc++.h>
using namespace std;
long long arr[200005],sum=0,marr[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,i,j;
    cin>>n>>m;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>marr[i];
    }
    int idx=0;
    for(i=0;i<m;i++)
    {
            while(sum+arr[idx]<marr[i])
            {
                sum=sum+arr[idx];
                idx++;
            }
                cout<<idx+1<<" "<<marr[i]-sum<<endl;

    }
    return 0;
}
