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
        string s1,s2;
        int j,ans[205]={};
        cin>>s1>>s2;
        int l1=s1.size(),l2=s2.size();
        for(int i=l1;i>=0;i--)
        {
            if(s1[i]!='0')
            {
                break;
            }
            else
                l1--;
        }
          for(int i=l2;i>=0;i--)
        {
            if(s2[i]!='0')
            {
                break;
            }
            else
                l2--;
        }
        for(int i=0;i<l1;i++)
        {
            ans[i]+=s1[i]-'0';
        }
        for(int i=0;i<l2;i++)
        {
            ans[i]+=s2[i]-'0';
        }
        int l=max(l1,l2);
        for(int i=0;i<l;i++)
        {
            if(ans[i]>=10)
            {
                if(i==l-1)
                {
                    l++;
                }
                ans[i+1]=ans[i+1]+(ans[i]/10);
                ans[i]=ans[i]%10;
            }
        }
        for(j=0;j<l;j++)
        {
            if(ans[j])
            {
                break;
            }
        }
        for(;j<l;j++)
        {
            cout<<ans[j];
        }
        cout<<endl;
    }

    return 0;
}

