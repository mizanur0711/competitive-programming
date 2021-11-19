#include<bits/stdc++.h>
using namespace std;
long long fact(int n)
{
    if(n>=1)
    {
        return fact(n-1)*n;
    }
    else
        return 1;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    long long mn=min(a,b);
    cout<<fact(mn)<<endl;
    return 0;

}
