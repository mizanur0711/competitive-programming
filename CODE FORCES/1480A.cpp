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
        bool ht[26];
//        for(int i=0;i<26;i++)
//        {
//            ht[i]=false;
//        }
//        for(int i=0;i<s.size();i++)
//        {
//            ht[s[i]-'a']=true;
//        }
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
            {
                int j=0;
                while(j<26)
                {
                    if(s[i]!='a'+j)
                    {
                        s[i]='a'+j;
                        break;
                    }
                    j++;
                }
            }
            else
            {
                int j=25;
                while(j>=0)
                {
                    if(s[i]!='a'+j)
                    {
                        s[i]='a'+j;
                        break;
                    }
                    j--;
                }

            }
        }
        cout<<s<<endl;
    }

    return 0;
}

