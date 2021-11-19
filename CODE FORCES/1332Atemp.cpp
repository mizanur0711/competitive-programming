#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b,c,d;
    long long x,y,x1,y1,x2,y2;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        if((x>x1 || x<x2 )  ||  (y>y1 || y<y2))
        {
            x=x-a+b;
            y=y-c+d;
            if((x>=x1 && x<=x2 ) &&  (y>=y1 && y<=y2))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                 cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"NO"<<endl;

        }
}
return 0;
}
