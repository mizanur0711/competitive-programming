
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long p=0,c=0,psum=0,csum=0,ctemp=0,ptemp=0;
        bool cflag=true,pflag=true;
        for(int i=0;i<n;i++)
        {
            cin>>p>>c;
            if(ctemp>c)
            {
                cflag=false;
            }
            if(ptemp>p)
            {
                pflag=false;
            }
            ctemp=c;
            ptemp=p;
            psum+=p;
            csum+=c;
        }
        if(p>=c  && (cflag==true && ptemp==true))
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
