#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n,sum=1,y=1E13;
    cin>>n;
    for(int i=2;i<=n+2;i=i+2)
    {
        sum=(sum%10)*i;
    }
    cout<<(sum+1)<<endl;
    return 0;
}

