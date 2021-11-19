#include<bits/stdc++.h>
using namespace std;
int ht[1010];
int main()
{
    int n,arr[105];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ht[arr[i]]++;
    }
    int mx=0;
    for(int i=0;i<=1001;i++ )
    {
        mx=max(mx,ht[i]);
    }
    if(mx<=(n/2)+n%2)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
