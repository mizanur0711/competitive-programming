#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,a1,b,b1;
    cin>>a>>a1>>b>>b1;
    if(a>b)
    {
            cout<<a<<endl;
            return 0;
    }
    while(1)
    {
        if(a+a1>=b)
        {
            cout<<b<<endl;
            return 0;
        }
        else
        {
            a=a+a1;
        }
        if(b-b1<=a)
        {
            break;
        }
          else
        {
            b=b-b1;
        }
    }
    cout<<a<<endl;

    return 0;
}

