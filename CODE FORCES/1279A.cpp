#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c,avrg;
    cin>>t;
    while(t--)
    {
    cin>>a>>b>>c;
    avrg=floor((a+b+c)/3);
    if((a<=avrg && b<=avrg && c<=avrg)

    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
