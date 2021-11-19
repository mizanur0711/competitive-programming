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
    int k;
    cin>>k;
    int arr2[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr2[i];
    }
    sort(arr,arr+n);
    sort(arr2,arr2+k);
    bool flag=true;
    int temp;
    int p=0,x=k-1;
    while(flag)
    {
        bool ck=true;
        temp=arr[p]+arr2[x];
        for(int i=0;i<n;i++)
        {
            if(temp==arr[i])
            {
                ck=false;
                break;
            }
        }
        if(ck)
        {
            for(int i=0;i<k;i++)
            {
                if(temp==arr2[i])
                {
                    flag=true;
                    if(p+1<n)
                    {
                    p++;
                    }
                    if(x-1>=0)
                    {
                    x--;
                    }
                    break;
                }
                else
                {
                    flag=false;
                    break;
                }
            }
        }
        if(ck==false)
        {
            if(p+1<n)
                    {
                    p++;
                    }
            if(x-1>=0)
                    {
                    x--;
                    }
        }

    }
    cout<<arr[p]<<" "<<arr2[x]<<endl;
    return 0;
}
