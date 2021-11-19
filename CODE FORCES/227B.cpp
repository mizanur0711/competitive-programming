#include<bits/stdc++.h>
using namespace std;
int ht[100005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  n,m,vas=0,pet=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ht[arr[i]]=i+1;
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
        vas=vas+ht[arr2[i]];
        pet=pet+n-ht[arr2[i]]+1;
    }

    cout<<vas<<" "<<pet<<endl;
    return 0;

}
