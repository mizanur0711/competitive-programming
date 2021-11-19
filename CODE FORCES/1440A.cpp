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
        int n,cz,co,h,pz=0,po=0;
        cin>>n>>cz>>co>>h;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                po++;
            }
            else
            {
                pz++;
            }
        }
        if(cz<=h && co<=h )
        {
            cout<<min(pz*cz + po*co,min(co*n + pz*h,cz*n + po*h))<<endl;
        }
        else if(cz>h && pz>0 && co<cz)
        {
            cout<<co*n + pz*h<<endl;
        }
        else if(co>h && po>0 && cz<co)
        {
            cout<<cz*n + po*h<<endl;
        }
        else if(po==0)
        {
            int z=n*co + pz*h;
            if(z==0)
            {
                cout<<pz*cz<<endl;
            }
        }
        else if(pz==0)
        {
            int z=n*cz + po*h;
            if(z==0)
            {
                cout<<po*co<<endl;
            }
        }
    }

    return 0;
}

