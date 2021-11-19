#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string p,p1;
        cin>>p>>p1;
        int ans=0;
        int cur=1;
        for(int i=p.size()-1;i>=0;i--)
        {
            if(p[i]!=':')
            {
            ans+=(p[i]-'0')*cur;
            cur*=10;
            }
        }
        if(p1=="AM")
        {
            ans=ans%1200;
        }
        else
        {
            if(!(ans>=1200 && ans<=1299))
            {
            ans=ans+1200;
            }
        }
        int n;
        cin>>n;
        while(n--)
        {
            string s1,s11,s2,s22;
            cin>>s1>>s11>>s2>>s22;
        int ans1=0;
        int cur1=1;
        for(int i=s1.size()-1;i>=0;i--)
        {
            if(s1[i]!=':')
            {
            ans1+=(s1[i]-'0')*cur1;
            cur1*=10;
            }
        }
        if(s11=="AM")
        {
            ans1=ans1%1200;
        }
        else
        {
            if(!(ans1>=1200 && ans1<=1299))
            {
            ans1=ans1+1200;
            }
        }
         int ans2=0;
        int cur2=1;
        for(int i=s2.size()-1;i>=0;i--)
        {
            if(s2[i]!=':')
            {
            ans2+=(s2[i]-'0')*cur2;
            cur2*=10;
            }
        }
        if(s22=="AM")
        {
            ans2=ans2%1200;
        }
        else
        {
            if(!(ans2>=1200 && ans2<=1299))
            {
            ans2=ans2+1200;
            }
        }

            if(ans1<=ans && ans<=ans2)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }
}
