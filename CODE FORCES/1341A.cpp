#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>c>>d;
        int posn=n*(a+b);
        int negn=n*(a-b);
        bool flag=false;
        if(posn<(c-d) || negn>c+d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
