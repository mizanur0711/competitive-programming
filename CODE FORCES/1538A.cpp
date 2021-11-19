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
        int n,mx=0,mn=101;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mx=max(arr[i],mx);
            mn=min(arr[i],mn);
        }
        int ans=101,f=0;
        for(int i=0;i<n;i++)
        {

            if(arr[i]==mn)
            {
                f=1;
            }
            if(f==1 && arr[i]==mx)
            {
                cout<<"mnmx"<<endl;
                ans=i+1;
                break;
            }
        }
        f=0;
        for(int i=0;i<n;i++)
        {

            if(arr[i]==mx)
            {
                f=1;
            }
            if(f==1 && arr[i]==mn)
            {
                cout<<"mxmn"<<endl;
                ans=min(ans,i+1);
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mn)
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(arr[j]==mx)
                    {
                        cout<<"mn  mx"<<endl;
                        ans=min(ans,i+(n-j+1));
                        break;
                    }
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mx)
            {
                for(int j=n-1;j>=0;j--)
                {
                    if(arr[j]==mn)
                    {
                        cout<<"mx  mn"<<endl;
                        ans=min(ans,i+(n-j+1));
                        break;
                    }
                }

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
