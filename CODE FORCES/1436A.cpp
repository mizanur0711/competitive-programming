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
        int n,m,sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum=sum+x;
        }
        if(sum==m)
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

