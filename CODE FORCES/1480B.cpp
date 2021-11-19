#include<bits/stdc++.h>
using namespace std;
#define pll pair<long long,long long>
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        vector< pll >v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[i].second;
        }
        sort(v.begin(),v.end());
        int i;
        bool flag=1;
        for(i=0;i<n;i++)
        {
            if(b<=0)
            {
                flag=0;
                break;
            }
            long long x=(v[i].second+a-1)/a;
            b=b-(v[i].first)*(x-1);
            if(b<=0)
            {
                flag=0;
                break;
            }
            b=b-v[i].first;
        }
     //   cout<<v[i-1].second<<" "<<endl;
        if(flag)
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

