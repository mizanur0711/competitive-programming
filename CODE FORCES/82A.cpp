#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n,r=1;
    cin>>n;
    while(r*5 < n)
    {
        n=n-r*5;
        r*=2;
    }

    cout<<name[(n-1)/r]<<endl;
    return 0;

}
