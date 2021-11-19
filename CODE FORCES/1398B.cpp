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
        string s;
        cin>>s;
        vector<int >ans;
        //int c=0;
        for(int i=0;i<s.size();i++)
        {
            int c=0,j;
            if(s[i]=='1')
            {
                while(i<s.size())
                {
                    if(s[i]=='1')
                    {
                        c++;
                        i++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(c!=0)
            {
                ans.push_back(c);
            }
        }
        sort(ans.begin(),ans.end());
        int alice=0,len=ans.size();
        bool flag=true;
        for(int p=len-1;p>=0;p--)
        {
            if(flag)
            {
            alice=alice+ans[p];
            flag=false;
            }
            else
                {
                    flag=true;
                }

        }
        cout<<alice<<endl;

    }

    return 0;
}

