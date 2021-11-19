#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool ss=true;
    int n,s=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int p=0,i=0,j=n-1;p<n;p++)
    {
        if(ss)
        {
            ss=false;

            if(arr[i]>arr[j])
            {
                s=s+arr[i];
                i++;
            }
            else
            {
                s=s+arr[j];
                j--;
            }
        }
        else
        {
            ss=true;
            if(arr[i]>arr[j])
            {
                d=d+arr[i];
                i++;
            }
            else
            {
                d=d+arr[j];
                j--;
            }

        }

    }
    cout<<s<<" "<<d<<endl;
    return 0;
}
