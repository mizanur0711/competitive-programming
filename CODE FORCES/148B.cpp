#include<bits/stdc++.h>
using namespace std;
int main()
{

    int vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;
    int ans=0;
    if(vp>=vd)
    {
        cout<<"0"<<endl;
        return 0;
    }
    double p=vp*t,d=0.0;
    while(p<c)
    {
        double x=(p-d)/(vd-vp);
        p=p+(x*vp);
        d=d+(x*vd);
        if(p>=c)
        {
            break;
        }
        //cout<<p<<" d:"<<d<<" "<<x<<" "<<ans<<endl;
        ans++;
        x=(d/vd)+f;
        p+=(x*vp);
        d=0.0;
       // cout<<p<<" d:"<<d<<" "<<x<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
