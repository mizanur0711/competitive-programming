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
        int t=(n-3)%10;
        t--;
        if(t==0)
        {
            cout<<"9";
        }
        cout<<"9";
        for(int i=1;i<n;i++)
        {
            if(t<=-1)
            {
                t=9;
            }
            if(i==n-2)
            {
                cout<<"9";
            }
            else if(i==n-1)
            {
                cout<<"8";
            }
            else
            {
                cout<<t;
            }
            t--;
        }
        cout<<endl;
    }

    return 0;
}

