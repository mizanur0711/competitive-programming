#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(m>k)
        {
            int x;
            if(n/k < m)
            {
                x=n/k;
            }
            else
            {
                x=m;
            }

            int y;
            y=(m-n/k)-m/k;
            if(x!=m)
            {
            cout<<y<<endl;
            }
            else
                cout<<x<<endl;
        }
        else
        {

            cout<<"0"<<endl;
        }
    }
    return 0;
}
