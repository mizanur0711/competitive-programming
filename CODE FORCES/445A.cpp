#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];

        }
    }
        int c=0;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c++;
            if(arr[i][j]=='-')
            {
                cout<<"-";
                continue;
            }
            else if(c%2==0)
            {
                arr[i][j]='W';
                cout<<"W";
            }
            else
            {
                arr[i][j]='B';
                cout<<"B";
            }
        }
        cout<<endl;
        if(m%2==0)
        {
            c++;
        }

    }


    return 0;
}

