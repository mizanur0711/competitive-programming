#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        double r,x,y,a,b;
        cin>>r>>x>>y>>a>>b;
        double d=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        cout<<(int)ceil(d/(2*r))<<endl;

    }
    return 0;
}
