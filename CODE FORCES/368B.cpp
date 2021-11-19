#include<bits/stdc++.h>
using namespace std;
const int a=10E5+5;
int DP[a];
int main()
{
    int n,m;
    cin>>n>>m;
    memset(DP, 0, sizeof(DP));
    int arr[n+1];
    for(int i=1;i<n+1;i++)
    {
        cin>>arr[i];
    }
    int arr2[n+1],ans=0;

    for(int i=n;i>=1;i--)
    {

        if(!DP[arr[i]])
        {
            DP[arr[i]]=1;
            ans++;
            arr2[i]=ans;
        }
        else
        {
            arr2[i]=ans;
        }
    }
    while(m--)
    {
        int x;
        cin>>x;
        cout<<arr2[x]<<endl;
    }

    return 0;
}
