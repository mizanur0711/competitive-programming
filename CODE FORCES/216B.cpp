#include<bits/stdc++.h>
using namespace std;
int arr[105][105];
int vis[105];
int col[105];
int cross[105];
bool dfs(int s,int n,int c)
{
    vis[s]=1;
    col[s]=c;
    for(int i=1;i<=n;i++)
    {
        if(arr[s][i] && !vis[i])
        {
            dfs(i,n,c^1);
        }
        else if(arr[s][i] && vis[i])
        {
            if(col[s]==col[i])
            {
                cross[i]=1;
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    memset(col,0,sizeof(col));
    memset(cross,0,sizeof(cross));
    memset(vis,0,sizeof(vis));
    memset(arr,0,sizeof(arr));

    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b]=arr[b][a]=1;
    }
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,n,0);
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(cross[i])
        {
            c++;
        }
    }
    c=c/2;
    if((n-c)%2)
    {
        c++;
    }
    cout<<c<<endl;
    return 0;
}

