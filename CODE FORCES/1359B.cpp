#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,counter=0,ans=0;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='.')
                {
                    counter++;
                }
            }
        }
           for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;)
            {
                if((arr[i][j]=='.') && (arr[i][j+1]=='.') && j+1<m)
                {
                 ans=ans+y;
                 j=j+2;
                }
                else
                {
                    if((arr[i][j]=='.'))
                    {
                    ans=ans+x;
                    }
                    j++;
                }
            }
        }
        cout<<min(ans,counter*x)<<endl;
    }
    return 0;
}
