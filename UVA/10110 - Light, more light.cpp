#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        k=sqrt(n);
        if(k*k==n)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
