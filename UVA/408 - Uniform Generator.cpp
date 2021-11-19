#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
int main()
{
    int s,m;
    while(cin>>s>>m)
    {
        int x=gcd(s,m);
        cout<<setw(10)<<s<<setw(10)<<m<<"    ";
        if(x==1)
        {
            cout<<"Good Choice"<<endl;
        }
        else
        {
            cout<<"Bad Choice"<<endl;
        }
        cout<<endl;
    }

}
