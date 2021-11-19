#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum;
        cin>>n;
        sum=n;
        while(n/10>1)
        {
            sum=sum+ceil(n/10);
            n=ceil(n/10);
        }

        cout<<sum<<endl;
    }
    return 0;
}
