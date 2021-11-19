#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long arr[15000];
    int j=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {

        if(arr[i]%2==0)
        {
            arr[i]=arr[i]/2;
        }
        else
        {
           arr[i]=(arr[i]+j)/2;
           j=j*(-1);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

