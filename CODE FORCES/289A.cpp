#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,k,sum=0;
    cin>>t>>k;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        sum=sum+(b-a+1);
    }
    cout<<((k-(sum%k))%k)<<endl;
    return 0;
}
