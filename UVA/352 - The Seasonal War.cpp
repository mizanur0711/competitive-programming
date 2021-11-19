#include<bits/stdc++.h>
using namespace std;
#define m 26
int arr[m][m];
bool visited[m][m];
string s;
int n;
int dc[]={-1,-1,0,1,1,1,0,-1};
int dr[]={0,1,1,1,0,-1,-1,-1};

void dfs(int i,int j)
{
    visited[i][j]=true;
    for(int k=0;k<8;k++)
    {
        if(i +dc[k]>=0 && i+dc[k]<n && j +dr[k]>=0 && j+dr[k]<n)
        {
            int ti=i+dc[k];
            int tj=j+dr[k];
            if(!visited[ti][tj] && arr[ti][tj])
            {
                dfs(ti,tj);
            }
        }
    }
}
int main()
{
    int c=0;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int j=0;j<n;j++)
            {
                arr[i][j]=s[j]-'0';
                visited[i][j]=false;
            }
        }

        int cc=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[i][j] && arr[i][j])
                {
                    cc++;
                    dfs(i,j);
                }
            }
        }
        cout<<"Image number "<<++c<<" contains "<<cc<<" war eagles."<<endl;

    }
}
