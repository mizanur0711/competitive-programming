#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int x=(n+k-1)/k;
    int ovn1=0,ovn2=d;
    for(int i=0;i<x;i++)
    {
    if(ovn1<=ovn2)
    {
        ovn1=ovn1+t;
    }
    else
    {
        ovn2=ovn2+t;
    }
    }

    if(max(ovn1,ovn2)<x*t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
