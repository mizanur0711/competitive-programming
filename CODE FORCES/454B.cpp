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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int p=0,c=0;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                p++;
            }
            if(p>0)
            {
                c++;
            }
        }
        if(p>0 && arr[n-1]>arr[0])
        {
            p++;
        }
        if(p>1)
        {
            c=-1;
        }
        cout<<c<<endl;

    }
    return 0;
}
