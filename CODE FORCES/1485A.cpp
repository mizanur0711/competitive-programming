#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     long long a,b;
     cin>>a>>b;
     int c=0;
     int i=2;
     while(a>0)
     {
         if(b<=1)
         {
             b++;c++;
          //   cout<<a<<" "<<b<<" "<<c<<" 1"<<endl;
         }
         int x=a/b;
        if(a/(b+1))
         {
             b++;
             c++;
         }
         else
         {
             a=a/b;
             c++;
           //   cout<<a<<" "<<b<<" "<<c<<" 2"<<endl;
         }
         i++;
     }
     cout<<c<<endl;
    }
    return 0;
}
