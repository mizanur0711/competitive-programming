#include<bits/stdc++.h>
using namespace std;
char s[105][105];
int n;

void dfs(int i, int j)
{
    if(i >= n || j >= n || i < 0 || j < 0)
        return;
    if(s[i][j] == '.')  return;
    s[i][j] = '.';
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }

        int cc=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i][j] == 'x')
                {
                    cc++,dfs(i,j);
                }
            }
        }
        printf("Case %d: %d\n", ++c, cc);

    }
    return 0;
}

