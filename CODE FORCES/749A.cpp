#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0,sum=0;
    cin>>n;
    int arr[n];
    if(n%2==0)
    {
    for(int i=0;i<n;i++)
    {
        if(n!=sum)
        {
            counter++;
            arr[i]=2;
            sum=sum+2;
             if(n==sum)
            {
                break;
            }
        }
    }
    }
    else if(n%2==1)
         for(int i=0;i<(n-1);i++)
    {
        if(n==sum+3)
        {
            counter++;
            arr[i]=3;
            sum=sum+3;
            break;
        }
        else if(sum<=n)
        {
            counter++;
            arr[i]=2;
            sum=sum+2;
            if(n==sum)
            {
                break;
            }
        }
    }

    cout<<counter<<endl;
    for(int i=0;i<counter;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}
