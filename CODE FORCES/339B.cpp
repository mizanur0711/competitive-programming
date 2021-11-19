#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,sum=0,p=1,x;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        if(p<=x)
        {
            sum=sum+x-p;
            p=x;
        }
        else
        {
            sum=sum+n-p+x;
            p=x;
        }
    }
    cout<<sum<<endl;
}
