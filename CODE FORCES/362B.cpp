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
        int n,m;
        cin>>n>>m;
        int arr[m];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+m);
        if(arr[0]==1 || arr[m-1]==n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
        else
        {
            for(int i=0;i<m-1;i++)
            {
                if((arr[i+1]==arr[i]+1 && arr[i+2]==arr[i]+2) || (arr[i]==n-3 && arr[i+1]==n-2 && arr[i+2]==n-1))
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;

    }
    return 0;
}
