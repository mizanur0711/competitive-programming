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
        int n,mx=-1;
        cin>>n;
        set<int > s;
        vector<int > v(n);
        v.clear();
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            mx=max(x,mx);
            v.push_back(x);
            s.insert(x);
        }
        int i,ans=0;
        for(i=0;i<n;i++)
        {
            if(v[i]>v[i+1] && v[i]==mx && i!=n-1)
            {
                ans=i;
                break;
            }
            else if(v[i-1]<v[i] && v[i]==mx && i!=0 )
            {
                ans=i;
                break;
            }
        }

        if(s.size()==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans+1<<endl;
        }
    }

    return 0;
}
