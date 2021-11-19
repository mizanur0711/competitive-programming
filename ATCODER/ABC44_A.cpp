#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long n,k,x,y;
    cin>>n>>k>>x>>y;
     if(n>k)
     {
         cout<<k*x+(n-k)*y<<endl;
     }
     else
     {
         cout<<n*x<<endl;
     }
     return 0;

}
