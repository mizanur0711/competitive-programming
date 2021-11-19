#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    set<int>dg;
    set<int>ndg;
    char x=arr[0][0];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
            {
                dg.insert(arr[i][j]);
            }
            else
            {
                ndg.insert(arr[i][j]);

            }
        }
    }
    if(dg.size()==1 && ndg.size()==1 & *dg.begin()!=*ndg.begin())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
