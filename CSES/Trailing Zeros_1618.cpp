#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        while(n>=5)
        {
            c+=n/5;
            n/=5;
        }
        cout<<c<<endl;
    }
    return 0;
}
