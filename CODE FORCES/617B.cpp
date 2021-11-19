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
    int flag=0;
    long long ans=0,fir;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
        if(flag)
        {
            ans=ans*(i-fir);
            fir=i;
        }
        else if(!flag)
        {
            flag=1;
            ans=1;
            fir=i;
        }
        }
    }
    cout<<ans<<endl;
    return 0;
}
