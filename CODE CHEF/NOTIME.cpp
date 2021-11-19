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
        int n,h,x;
        cin>>n>>h>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(h-x>0)
        {
        int p=h-x;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==p)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
