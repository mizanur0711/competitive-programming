#include<bits/stdc++.h>
using namespace std;
vector< int > v[60];
bool vis[60];
long long ans=1;
void dfs(int source)
{
    vis[source]=true;
    for(int i=0;i<v[source].size();i++)
    {

        if(!vis[v[source][i]])
        {
            ans=ans*2;
            dfs(v[source][i]);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    cout<<ans<<endl;
    return 0;
}
