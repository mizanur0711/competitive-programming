#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int h,w,x,y;
        cin>>h>>w>>x>>y;
        char grid[h][w];
        for(int i=0;i<h;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<w;j++)
            {
                grid[i][j]=s[j];
            }
        }
        int ans=0;
        x--;
        y--;
        if(grid[x][y]=='.')
        {
            ans++;
           // cout<<"main";
        }
        int k=x-1,p=y;
        while(k>=0)
        {
            if(grid[k][p]=='.')
            {
                ans++;
                k--;
              //  cout<<"upore";
            }
            else
            {
                break;
            }
        }
         k=x+1,p=y;
        while(k<h)
        {
            if(grid[k][p]=='.')
            {
                ans++;
                k++;
             //   cout<<"niche";
            }
            else
            {
                break;
            }
        }
         k=x,p=y-1;
        while(p>=0)
        {
            if(grid[k][p]=='.')
            {
                ans++;
                p--;
                //cout<<"dane";
            }
            else
            {
                break;
            }
        }
         k=x,p=y+1;
        while(p<w)
        {
            if(grid[k][p]=='.')
            {
                ans++;
                p++;

            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
