#include<iostream>
#include<vector>
using namespace std;
int arr[10][10];
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=1;
        }
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
   cout<<arr[i-1][j-1]<<endl;
    return 0;
}
