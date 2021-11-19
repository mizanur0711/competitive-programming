#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,arr[105][205],counter=0;
    cin>>n>>m;

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<2*m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
     {
        for(int j=0;j<2*m;j=j+2)
        {
            if(arr[i][j]==1 || arr[i][j+1]==1)
            {
                counter++;
            }
        }
    }

    cout<<counter<<endl;
    return 0;

}
