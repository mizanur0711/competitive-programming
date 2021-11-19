#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector< int > v[n+1];
    int deg[105];
    for(int i=0;i<105;i++)
    {
        deg[i]=0;
    }
    queue<int>q;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }
    int ans=0;
    while(1)
    {
        for(int i=0;i<=n;i++)
        {
            if(deg[i]==1)
            {
                q.push(i);
            }
        }
        if(q.empty())
        {
            break;
        }
        else
        {
            ans++;
        }
        while(!q.empty())
        {
            int x=q.front();
            deg[x]=0;
            q.pop();
            for(int i=0;i<v[x].size();i++)
            {
                deg[v[x][i]]--;
            }
        }
    }
    cout<<ans<<endl;
}
