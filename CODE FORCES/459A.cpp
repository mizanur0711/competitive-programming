#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,best=-1;
    cin>>a>>b>>c;
    best=max(best,a+b+c);
    best=max(best,a+(b*c));
    best=max(best,a*(b+c));
    best=max(best,(a*b)+c);
    best=max(best,(a+b)*c);
    best=max(best,a*b*c);
    cout<<best<<endl;
    return 0;
}
