#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    int arr[m+1];
    for(int i=0;i<=m;i++)
    {
        cin>>arr[i];
    }
    bitset <20> fr(arr[m]);
    for(int i=0;i<m;i++)
    {
        bitset <20> fin(arr[i]);
        fin=fr^fin;
        int c=fin.count();
        if(c<=k)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
