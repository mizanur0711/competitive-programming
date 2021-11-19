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
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
        int b1=max(arr[0],arr[1]);
        int b2=max(arr[2],arr[3]);
        sort(arr,arr+4);
        if((b1==arr[2] && b2==arr[3]) || (b1==arr[3] && b2==arr[2]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
