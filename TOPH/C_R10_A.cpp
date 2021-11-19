#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum;
    cin>>n;
    sum=(n*(n+1))/2;
   // cout<<sum<<endl;
    if(n%2==1 || sum%n==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
