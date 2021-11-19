#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counterR=0,counterUR=0,temp=1e5;
    bool maybe=true;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(temp<a)
        {
            counterUR++;
        }
        temp=a;
        if(abs(a-b)>0)
        {
            counterR++;
        }
    }
    if(counterR>0)
    {
        cout<<"rated"<<endl;
        return 0;

    }
    if( counterUR==0)
    {
        cout<<"maybe"<<endl;
    }
    else
    {
        cout<<"unrated"<<endl;
    }
    return 0;
}
