#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[200005],counter=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans=0;
    if(k==0)
    {
        ans=arr[0]-1;
    }
    else
    {
       ans=arr[k-1];
    }

        for(int i=0;i<n;i++)
    {
        if(arr[i]<=ans)
        {
            counter++;
        }
    }

    if(k!=counter || !(1<=ans  && ans<=1000*1000*1000))
    {
        cout<<"-1"<<endl;
    }
    else
    {

        cout<<ans;
    }

}
