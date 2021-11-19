#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    if(m<=n)
    {
     cout<<n-m<<endl;
    }
    else
    {
        int ans=0;
        while(m>n)
        {
            if(m%2)
            {
                m++;
                ans++;
                cout<<"add"<<" ";
            }
            else
            {
                m=m/2;
                ans++;
                cout<<"mul"<<" ";
            }
        }
        cout<<ans+(n-m)<<endl;
    }
    return 0;
}
