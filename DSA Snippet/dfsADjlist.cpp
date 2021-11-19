#include<bits/stdc++.h>
using namespace std;
vector<int> adj[10];
bool visited[10];
void dfs(int s)
{
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++)
    {
        if(visited[adj[s][i]]==false)
        {
            dfs(adj[s][i]);
        }
    }
}
int main()
{
    int n,e,counter=0;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==false)
        {
        dfs(i);
        counter++;
        }
    }
    cout<<counter<<endl;

    return 0;
}
