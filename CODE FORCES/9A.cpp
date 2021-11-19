#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,counter=0;
    cin>>y>>w;
    for(int i=max(y,w);i<=6;i++)
    {
        counter++;
    }
    if(6%counter==0)
    {
        cout<<"1"<<"/"<<6/counter<<endl;
    }
    else if(counter==4)
    {
        cout<<"2/3"<<endl;
    }
    else
    {
        cout<<counter<<"/"<<"6"<<endl;
    }
    return 0;

}
