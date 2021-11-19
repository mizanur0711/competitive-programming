
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int  a,b,c,d;
        cin>>a>>b>>c>>d;
        if((a==c && b+d==a) || (b==c && a+d==b) || (a==d && c+b==a) || (b==d && a+c==b))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
