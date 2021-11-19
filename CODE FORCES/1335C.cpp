#include<bits/stdc++.h>
using namespace  std;
int arr[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int mx=0,x=0;
        int n;
        cin>>n;
        set<int > s;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            arr[x]++;
            if(arr[x]>mx)
            {
                mx=arr[x];
            }
            s.insert(x);
        }
        int k=s.size()-1;
        if(mx==1)
        {
          x=k?1:0;
          cout<<x<<endl;
        }
        else
        {
            if(mx>k)
            {
                x=min(k+1,mx-1);
            }
            else
            {
                x=mx;
            }
            cout<<x<<endl;
        }
        for(int i=1;i<=n;i++)
        {
            arr[i]=0;
        }
    }
    return 0;
}
