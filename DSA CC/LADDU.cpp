#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string ntly;
        cin>>n>>ntly;
        string s;
        int sum=0;
        while(n--)
        {
        cin>>s;
        if(s=="CONTEST_WON")
        {
            int rnk;
            cin>>rnk;
            if(rnk<20)
            {
            sum=sum+300+(20-rnk);
            }
            else
                sum=sum+300;
        }
        else if(s=="TOP_CONTRIBUTOR")
        {
            sum=sum+300;
        }
        else if(s=="BUG_FOUND")
        {
            int sev;
            cin>>sev;
            sum=sum+sev;
        }
        else if(s=="CONTEST_HOSTED")
        {
            sum=sum+50;
        }
        }
        int ans;
        if(ntly=="INDIAN")
        {
            ans=sum/200;
        }
        else
        {
            ans=sum/400;
        }
        cout<<ans<<endl;
    }
    return 0;

}
