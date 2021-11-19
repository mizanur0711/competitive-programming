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
        int q,d;
        cin>>q>>d;
        while(q--)
        {
            int x;
            cin>>x;
            bool flag=false;
            if(x>=d*10)
            {
                flag=true;
            }
            if(flag==false)
            {
            while(x>=d)
            {
                if(x%d==0)
                {
                    flag=true;
                    break;
                }
                x=x-10;
            }
            }
            if(flag)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}

