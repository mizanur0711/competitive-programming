#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,a;
    cin>>b>>a;
    int h=(2*a)/b + ((2*a)%b!=0);
    cout<<h<<endl;
    return 0;
}
