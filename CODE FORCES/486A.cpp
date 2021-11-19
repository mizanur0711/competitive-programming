#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum;
    cin>>n;
    if(n%2==0)
    {
        n=n/2;
        sum=((n/2)*(2*(-1)+(n-1)*(-2)))+((n/2)*(2*(2)+(n-1)*(2)));
    }
    else
    {
    n=floor(n/2);
    long long m=n+1;
    sum=((m*(2*(-1)+(n-1)*(-2))/2)+((n*(2*(2)+(n-1)*2))/2);
    }
    cout<<sum<<endl;
    return 0;

}
