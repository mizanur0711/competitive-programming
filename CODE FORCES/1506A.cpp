#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {

     long long int n,m,x;
     cin>>n>>m>>x;
     if(n==1 || m==1)
     {
         cout<<x<<endl;
     }
     else if(x==(n*m))
     {
         cout<<x<<endl;
     }
     else
     {
     long long int ans=((x/n) +(x%n!=0)); // +((x%n)-1)*(m);
     if(x%n>0)
     {
         ans+=(((x%n)-1)*(m));
     }
     else
     {
         ans+=((n-1)*m);
     }
     cout<<ans<<endl;
     }
    }
    return 0;
}
