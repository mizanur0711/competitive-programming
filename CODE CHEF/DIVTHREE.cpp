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
        int n,k,d;
        cin>>n>>k>>d;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum=sum+x;
        }
        int res=sum/k;
        if(res>=d)
        {
            cout<<d<<endl;
        }
        else
        {
            cout<<res<<endl;
        }
    }

    return 0;
}

