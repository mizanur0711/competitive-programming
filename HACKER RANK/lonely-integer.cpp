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
    /**
    1st apprch
    sort(arr,arr+n);

    for(int i=0;i<n;i=i+2)
    {
        int x=(arr[i])&(arr[i+1]);
        if(arr[i]==arr[i+1] && arr[i]==x)
        {
            continue;
        }
        else
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    **/

    //using xor
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^arr[i];
    }
    cout<<res<<endl;

    return 0;
}
