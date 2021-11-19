#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            ans++;
        }
        else if(arr[i]==1 || arr[i]==2)
        {
            if(i>0 && arr[i-1]==arr[i])
            {
             ans++;
             arr[i]=0;
            }
        }
        else if((i>0 && i<(n-1)) && (arr[i-1]==1 || arr[i-1]==2))
        {
            if(arr[i-1]==1)
            {
                arr[i]=2;
            }
            else
            {
                arr[i]=1;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
