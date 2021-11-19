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
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
       // bool flag=true;
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                {
                    c++;
                    //break;
                }
            }
        }
        if((m*n-c)%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }
    }
    return 0;
}

