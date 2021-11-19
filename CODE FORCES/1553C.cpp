#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ag=0,bg=0;
        string s;
        cin>>s;
        int ans=9;
        for(int i=0;i<10;i++)
        {
            if(i%2==0)
            {
                ag+= s[i]!='0';
            }
            else
            {
                bg+= s[i]=='1';
            }
            if(ag>bg+(10-i)/2)
            {
                ans=min(ans,i);
            }
            if(bg>ag+(9-i)/2)
            {
                ans=min(ans,i);
            }
        }

        ag=0,bg=0;
        for(int i=0;i<9;i++)
        {
            if(i%2==0)
            {
                ag+=s[i]=='1';
            }
            else
            {
                bg+=s[i]!='0';
            }
            if(ag>bg+(10-i)/2)
            {
                ans=min(ans,i);
            }
            if(bg>ag+(9-i)/2)
            {
                ans=min(ans,i);
            }
        }
        cout<<ans+1<<endl;

    }


}
