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
        int x,y,z,a=0,b=0,c=0;
        cin>>x>>y>>z;
        int h=max(x,max(y,z));
        int m=min(x,min(y,z));
        if(x==y && y==z)
        {
            a=x;
            b=x;
            c=x;
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else if(x==z && x>=h)
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<m<<" "<<h<<endl;
        }
        else if(x==y && x>=h )
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<m<<" "<<h<<endl;
        }
        else if(y==z && y>=h )
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<m<<" "<<h<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        }

    return 0;
}

