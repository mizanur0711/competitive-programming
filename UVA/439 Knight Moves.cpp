#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define clear(a) memset(a,0,sizeof(a))
int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
char c1[5],c2[5];
bool visited[10][10];
int cost[10][10];
void bfs(int a,int b,int c,int d)
{
    queue<pii> q;
    clear(visited);
    q.push(pii(a,b));
    visited[a][b]=true;
    cost[a][b]=0;
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        if(top.first==c && top.second==d)
        {
            cout<<"To get from "<<c1<<" to "<<c2<<" takes "<<cost[c][d]<<" knight moves."<<endl;
            return;
        }
        for(int i=0;i<8;i++)
        {
            int f=top.first+dx[i];
            int s=top.second+dy[i];

            if((f>0 && f<=8)&& (s>0 && s<=8) && !visited[f][s])
            {
                visited[f][s]=true;
                cost[f][s]=cost[top.first][top.second]+1;
                q.push(pii(f,s));
            }
        }
    }

}
int main()
{
    while(cin>>c1>>c2)
    {
        int a1,a2,b1,b2;
        a1=c1[0]-96;
        a2=c1[1]-'0';
        b1=c2[0]-96;
        b2=c2[1]-'0';

     bfs(a1,a2,b1,b2);
    }
    return 0;
}
