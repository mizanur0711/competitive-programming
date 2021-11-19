#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=2,m=4;
        cin>>n;
        int k=n/2;
        while(k>1)
        {
            sum=sum+m;
            m=m*2;
            k--;
        }
        cout<<sum<<endl;

    }
    return 0;
}
