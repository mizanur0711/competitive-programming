#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,counter=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
       counter=counter+(m+i%5)/5;
    }
    cout<<counter<<endl;
    return 0;
}
