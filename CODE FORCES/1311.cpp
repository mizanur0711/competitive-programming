#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t,counter;
    cin>>t;
    while(t--)
    {
    cin>>a>>b;
    if(abs(a-b)!=0)
    {
        if(abs(a-b)%2==0)
        {
            cout<<"1"<<endl;
        }
        else if(abs(a-b)==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
    else
    {
        cout<<"0"<<endl;
    }

    }
    return 0;
}
