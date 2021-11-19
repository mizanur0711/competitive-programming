#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cin>>x>>y>>z;
    cin>>a>>b>>c;
    if(a+b+c>=x+y+z && a>=x && a+b-x>=y && a+b+c-x-y>=z)
    {

        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
