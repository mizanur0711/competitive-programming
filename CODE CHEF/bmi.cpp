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
        double h,m;
        cin>>h>>m;
        double ans=h/(m*m);
        if(ans<=18)
        {
            cout<<"1"<<endl;
        }
        else if(ans>18 && ans <=24)
        {
            cout<<"2"<<endl;
        }
        else if(ans>=25 && ans<=29)
        {
            cout<<"3"<<endl;
        }
        else
        {
            cout<<"4"<<endl;
        }
    }

    return 0;
}

