
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long n,t;
        cin>>n>>t;
        int arr[n+1],cum[n+1];
        arr[0]=cum[0]=0;
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
            cum[i]=arr[i];
            cum[i]+=cum[i-1];

        }
        int c=0;
        for(int i=1,j=n;i<=j;)
        {
            if(cum[j]-cum[i-1]>t)
            {
              //  cout<<cum[j]-cum[i-1]<<" cum "<<endl;
                if(arr[i]>arr[j])
                {
                    i++;
              //      cout<<"i++ "<<endl;
                }
                else
                {
                    j--;
             //       cout<<"j-- "<<endl;
                }
                if(cum[j]-cum[i-1]<=t)
                {
                  c=max(c,j-i+1);
             //     cout<<i<<" v "<<j<<endl;
                }
            }
            else
            {
                c=max(c,j-i+1);
             //   cout<<i<<" "<<j<<endl;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
