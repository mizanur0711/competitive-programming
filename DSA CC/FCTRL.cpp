#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
    cin>>n;
    sum=0;
    while(n>0)
    {
        sum=sum+n/5;
        n=n/5;
    }
    cout<<sum<<endl;
    }
    return 0;

}


