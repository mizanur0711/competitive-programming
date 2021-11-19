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
        vector< int >v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int ans=0;
        int i=0;
        while(i<v.size())
        {
            int mn=min(v[i],v[i+1]);
            int mx=max(v[i],v[i+1]);
            if(mx>2*mn)
            {
               auto it=v.emplace(v.begin()+i,2*mn-1);
                cout<<(*v.begin()+1)<<" "<<2*mn-1<<endl;
                ans++;
                i++;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}

