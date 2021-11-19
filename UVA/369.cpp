#include<bits/stdc++.h>
using namespace std;
long long arr[101][101];
int main()
{
    int n,m;
    arr[1][0]=1;
    arr[1][1]=1;
    for(int i=2;i<=100;i++)
    {
        arr[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }
    while(cin>>n>>m,n||m)
    {
        cout<<n<<" things taken "<<m<<" at a time is "<<arr[n][m]<<" exactly."<<endl;
    }
    return 0;
}
