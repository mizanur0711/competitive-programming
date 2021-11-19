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
        int ans=arr[0]+arr[1];
        int i;
        for(i=2;i<n;i++)
        {
            if(ans<=arr[i])
            {
                break;
            }
        }
        if(i+1<=n)
        {
        cout<<"1"<<" "<<"2"<<" "<<i+1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

