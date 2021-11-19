#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,counter=0;
    cin>>n;
    while(n!=0)
    {
        counter=counter+n%2;
        n=n/2;
    }
    cout<<counter<<endl;
    return 0;
}
