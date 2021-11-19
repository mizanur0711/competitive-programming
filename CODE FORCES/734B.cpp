#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,sum=0;
    cin>>a>>b>>c>>d;
    int mx=max(a,max(b,max(c,d)));
    while(mx--)
    {
        if(a>=1 && c>=1 && d>=1)
        {
            sum=sum+256;
            a--;
            c--;
            d--;
        }
        else if(a>=1 && b>=1)
       {
            sum=sum+32;
            a--;
            b--;
        }
    }
    cout<<sum<<endl;
    return 0;

}
