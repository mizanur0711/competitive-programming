#include<bits/stdc++.h>
using namespace std;
bool ht[26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    char c;
    cin>>n>>m>>c;
    char s[n][m];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i][j]==c)
            {
                if(s[i][j+1]!='.' && s[i][j+1]!=c && (j+1<=m-1))
                {
                    char d=s[i][j+1];
                    int x=(d-'A')%26;
                    if(ht[x]==0)
                    {
                        ht[x]=1;
                        ans++;
                    }

                }
                if(s[i][j-1]!='.' && s[i][j-1]!=c && (j-1>=0))
                {
                    char d=s[i][j-1];
                    int x=(d-'A')%26;
                    if(ht[x]==0)
                    {
                        ht[x]=1;
                        ans++;
                    }
                }
                if(s[i-1][j]!='.' && s[i-1][j]!=c && (i-1>=0))
                {
                    char d=s[i-1][j];
                    int x=(d-'A')%26;
                    if(ht[x]==0)
                    {
                        ht[x]=1;
                        ans++;
                    }
                }
                if(s[i+1][j]!='.' && s[i+1][j]!=c && (i+1<=n-1))
                {
                    char d=s[i+1][j];
                    int x=(d-'A')%26;
                    if(ht[x]==0)
                    {
                        ht[x]=1;
                        ans++;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
