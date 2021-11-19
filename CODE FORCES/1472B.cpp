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
        int n,o=0,t=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==2)
            {
                t++;
            }
            else
            {
                o++;
            }
        }
        int s=t*2+o;

        if((t%2==0 && o%2==0) || (s%2==0 && t%2==1 && o>1))
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

