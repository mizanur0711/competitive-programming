#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c1=0,sum=0;
        bool s=false;
        for(int i=0;i<n;i++)
        {
            int c=0,tsum=0;
            if(arr[i]==1)
            {
                for(int j=i+1;j<n;j++)
                {
                    if(arr[j]==0)
                    {
                        c++;
                    }
                    else if(arr[j]==1)
                    {
                        sum+=c;
                        i=j-1;
                        break;
                    }
                }
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}

