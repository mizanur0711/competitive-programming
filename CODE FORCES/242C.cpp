#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
map<pii,bool>g,vis;
map<pii,int> cost;
int dx[]={-1,-1,-1,0,1,1,1,0};
int dy[]={-1,0,1,1,1,0,-1,-1};
int x,y,desx,desy;
bfs(int px,int py)
{
    vis[{px,py}]=1;
    cost[{px,py}]=0;
    queue< pii > q;
    q.push({px,py});
    while(!q.empty())
    {
        pii top=q.front();
        int ux=top.first;
        int uy=top.second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int tx=ux+dx[i];
            int ty=uy+dy[i];
            if(tx==desx && ty==desy)
            {
                return cost[{ux,uy}]+1;
            }
            if(g[{tx,ty}] && !vis[{tx,ty}])
                {
                    vis[{tx,ty}]=1;
                    cost[{tx,ty}]=cost[{ux,uy}]+1;
                    q.push({tx,ty});
                }
        }
    }
    return -1;

}
int main()
{
    cin>>x>>y>>desx>>desy;
    int n;
    cin>>n;
    while(n--)
    {
        int r,a,b;
        cin>>r>>a>>b;
        for(int i=a;i<=b;i++)
        {
            g[{r,i}]=1;
        }
    }
    cout<<bfs(x,y)<<endl;
}
