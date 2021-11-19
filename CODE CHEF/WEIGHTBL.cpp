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
     int w1,w2,x1,x2,m;
     cin>>w1>>w2>>x1>>x2>>m;
     int y=w2-w1;
     if(y>=x1*m && y<=x2*m)
     {
         cout<<"1"<<endl;
     }
     else
     {
         cout<<"0"<<endl;
     }
    }
    return 0;
}
