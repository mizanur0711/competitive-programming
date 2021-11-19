#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int mx=0,c=0,arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            c++;
            mx=max(c,mx);
        }
        else
        {
            c=0;
        }
    }
    cout<<mx+1<<endl;

    return 0;
}

