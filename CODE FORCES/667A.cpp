#include<bits/stdc++.h>
using namespace std;
#define pi 3.14159265358
int main()
{
    double d,h,v,e,x;
    cin>>d>>h>>v>>e;
    x=v/((pi*d*d)/4.0);
    if(x>e)
    {
        cout<<"YES"<<endl;
        cout<<fixed<<setprecision(12)<<h/(((4*v)/(pi*d*d))-e)<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
