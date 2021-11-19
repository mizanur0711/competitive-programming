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
        long long  a,b;
        cin>>a>>b;
        long long temp=a;
        while(1)
        {

             if(a%2==0 )
            {
                a=(a*3)/2;
            }
            else if(a>1)
            {
                a--;
            }
            if(b==1 || a>=b )
            {
                cout<<"YES"<<endl;
                break;
            }
            else if(temp==a || a<=0)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    return 0;
}
