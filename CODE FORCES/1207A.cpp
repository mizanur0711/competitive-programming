#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,b,f,h,c;
    cin>>t;
    while(t--)
    {
        int ans=0;
        cin>>k>>b>>f;
        cin>>h>>c;
        while(k-2>=0 && (b>0 || f>0))
        {
        if(h>c && b>0)
        {
            b--;
            ans=ans+1*h;
        }
        else if(c>h && f>0)
        {
            f--;
            ans=ans+1*c;
        }
        else
        {
            if(f>0)
            {
                f--;
                ans=ans+1*c;
            }
            else
            {
                b--;
               ans=ans+1*h;
            }
        }
            k=k-2;
    }
    cout<<ans<<endl;
}
    return 0;
}
