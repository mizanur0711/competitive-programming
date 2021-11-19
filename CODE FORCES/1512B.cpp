#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n][n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<n;j++)
            {
                arr[i][j]=s[j];
            }
        }
        int x,y,a,b;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]=='*')
                {
                    if(flag==0)
                    {
                        x=i;
                        y=j;
                        flag=1;
                    }
                    else
                    {
                        a=i;
                        b=j;
                        flag=2;
                        break;
                    }
                }
            }
            if(flag==2)
            {
                break;
            }
        }
        if(x!=a && y!=b)
        {
            arr[x][b]='*';
            arr[a][y]='*';
        }
        else if(x==a)
        {
            if(x==0)
            {
            arr[n-1][y]='*';
            arr[n-1][b]='*';
            }
            else
            {
                arr[0][y]='*';
                arr[0][b]='*';
            }
        }
        else if(y==b)
        {
            if(y==0)
            {
                arr[x][n-1]='*';
                arr[a][n-1]='*';
            }
            else
            {
                arr[x][0]='*';
                arr[a][0]='*';
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
