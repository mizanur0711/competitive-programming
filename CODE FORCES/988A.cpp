#include<bits/stdc++.h>
using namespace std;
bool vis[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int > v;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(vis[x]==false)
        {
         vis[x]=true;
         v.push_back(i);
        }
    }
    if(k<=v.size())
    {
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
        {
           cout<<v[i]<<" ";
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}

