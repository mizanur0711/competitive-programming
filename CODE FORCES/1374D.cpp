#include<bits/stdc++.h>
using namespace std;
bool f(int a,int b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,f);
        int i=0,j=n-1;
        while(i<n && j>=0)
        {
            if(arr[i]%k==0)
            {
                i++;
            }
            else if((arr[i]+x+1)%k==0)
            {
                i++;
                x++;
            }
             else if(arr[j]%k==0)
            {
                j--;
            }
               else if((arr[j]+x+1)%k==0)
            {
                j--;
                x++;
            }
            else
            {
                x++;
            }
        }
        cout<<x<<endl;
    }

    return 0;
}

