#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr1[n],arr2[n-1],arr3[n-2];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    sort(arr1,arr1+n);

    for(int i=0;i<n-1;i++)
    {
        cin>>arr2[i];
    }
    sort(arr2,arr2+(n-1));

    for(int i=0;i<n-2;i++)
    {
        cin>>arr3[i];
    }
    sort(arr3,arr3+(n-2));


    int i=0;
    for(i=0;i<n-1;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<arr1[i]<<endl;
            break;
        }
    }
    if(i==n-1)
    {
        cout<<arr1[n-1]<<endl;
    }


    for(i=0;i<n-2;i++)
    {
        if(arr2[i]!=arr3[i])
        {
            cout<<arr2[i]<<endl;;
            break;
        }
    }
    if(i==n-2)
    {
        cout<<arr2[n-2]<<endl;
    }

    return 0;

}
