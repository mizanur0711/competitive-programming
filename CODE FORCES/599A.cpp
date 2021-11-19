#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mn=10E8+6;
    mn=min(mn,a+b+c);
    mn=min(mn,a+a+b+b);
    mn=min(mn,b+c+c+b);
    mn=min(mn,a+c+c+a);
    cout<<mn<<endl;
    return 0;
}
