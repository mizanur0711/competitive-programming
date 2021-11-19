#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s[10];
        string name="IEHOVA#";
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int x,y;
        for(int j=0;j<m;j++)
        {
            if(s[n-1][j]=='@')
            {
                x=n-1;
                y=j;
            }
        }
        int ind=-1,ans=0;
        string arr[7];
        while(x>=0)
        {
            if(ind==6)
            {
                break;
            }
            if(y+1<=m-1)
            {
                if(s[x][y+1]==name[ans])
                {
                    ans++;
                    ind++;
                    y++;
                    arr[ind]="right";
                }
            }
            if(y-1>=0)
            {
                if(s[x][y-1]==name[ans])
                {
                    ans++;
                    ind++;
                    y--;
                    arr[ind]="left";
                }

            }
            if(x-1>=0)
            {
                if(s[x-1][y]==name[ans])
                {
                    ans++;
                    ind++;
                    x--;
                    arr[ind]="forth";
                }

            }
        }
        cout<<arr[0];
        for(int i=1;i<=6;i++)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;

    }
}
