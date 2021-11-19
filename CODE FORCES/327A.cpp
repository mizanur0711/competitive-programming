#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mx=0,c=0;
    cin>>n;
    bool arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            c++;
        }
    }
    mx=max(mx,c);
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==1)
            {
                c++;
            }
        }
        mx=max(mx,c);
    }
    cout<<mx<<endl;

}
