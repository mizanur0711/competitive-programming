#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    cin>>l>>r;
    int mx=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=i;j<=r;j++)
        {
            int x=i^j;
            mx=max(mx,x);
        }
    }
    cout<<mx<<endl;
    return 0;
}
