#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n<=2)
    {
        cout<<"0"<<endl;
    }
    else
    {
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[0] && arr[n-1]>arr[i])
            {
                counter++;
            }
        }
        cout<<counter<<endl;

    }
    return 0;
}
