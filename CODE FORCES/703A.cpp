#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m,c,counterM=0,counterC=0;
    while(t--)
    {
        cin>>m>>c;
        if(m>c)
        {
            counterM++;
        }
        if(c>m)
        {
            counterC++;
        }
        else continue;
    }
    if(counterC>counterM)
    {
        cout<<"Chris"<<endl;
    }
    else if(counterM>counterC)
    {
        cout<<"Mishka"<<endl;
    }
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
