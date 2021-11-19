#include<bits/stdc++.h>
using namespace std;
vector< pair<int,int> > g[105];
bool vis[105];
int found;
void dfs(int source,int des,int color)
{
    if(source==des)
    {
        found=1;
        return;
    }
    vis[source]=true;
    for(auto &y : g[source])
    {
        pair<int,int>x =y;
        if(!vis[x.first] && x.second==color && !found)
        {
            dfs(x.first,des,color);
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
        int a,b,c;
        cin>>a>>b>>c;
        g[a].push_back(make_pair(b,c));
        g[b].push_back(make_pair(a,c));
    }

    int q;
    cin>>q;
    while(q--)
    {
        int v,u;
        cin>>u>>v;
        int ans=0;
        for(int i=1;i<=m;i++)
        {
            found=0;
            memset(vis,0,sizeof(vis));
            dfs(u,v,i);
            if(found)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
