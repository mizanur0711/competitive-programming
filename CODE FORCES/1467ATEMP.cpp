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
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"9";
        }
        else if(n==2)
        {
            cout<<"98";
        }
        else
        {
            cout<<"989";
        if(n-3>=1)
        {
        int t=0;
        for(int i=3;i<n;i++)
        {
            if(t>9)
            {
                t=0;
            }
                cout<<t;
            t++;
        }
        }
        }
        cout<<endl;
    }

    return 0;
}

