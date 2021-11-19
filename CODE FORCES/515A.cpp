#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,s;
    cin>>a>>b>>s;
    if(abs(a)+abs(b)==s)
    {
        cout<<"YES"<<endl;
    }
    else if(abs(a)+abs(b)<s)
    {
        if((s-abs(a)-abs(b))%2==0)
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
    return 0;

}
