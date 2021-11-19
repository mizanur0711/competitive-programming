#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,x,y;
    cin>>t>>x>>y;
    set<double>s;
    int flag=0;
    while(t--)
    {
     int a,j;
     cin>>a>>j;
     if(x!=a)
     {
        s.insert((double(j-y))/(double(a-x)));
     }
     else
     {
         flag=1;
     }
     }
    cout<<s.size()+flag<<endl;
    return 0;
}
