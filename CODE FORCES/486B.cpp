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
        int n,m;
        cin>>m>>n;
        int a[m][n],b[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>b[i][j];
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=1;
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i][j]==0)
                {
                    for(int p=0;p<n;p++)
                    {
                        a[i][p]=0;
                    }
                    for(int p=0;p<m;p++)
                    {
                        a[p][j]=0;
                    }
                }
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x=0;
                for(int p=0;p<m;p++)
                {
                    x=x || a[p][j];
                }
                for(int p=0;p<n;p++)
                {
                    x=x || a[i][p];
                }
                if(b[i][j]!=x)
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
