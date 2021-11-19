#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,rem;
    cin>>n>>m>>a>>b;
    if(n%m==0)
    {
        cout<<min((n/m)*b,n*a)<<endl;

    }
    else
    {
        if(m>n)
        {
            cout<<min(b,n*a)<<endl;
        return 0;

        }
        rem=n%m;
        cout<<min(min((n/m)*b+(rem*a),(n/m+1)*b),n*a)<<endl;
    }
    return 0;
}
