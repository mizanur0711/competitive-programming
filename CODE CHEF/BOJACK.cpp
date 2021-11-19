#include<bits/stdc++.h>
using namespace std;
int ht[26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            ht[s[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(ht[i]%2==0)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        if(c==26)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        for(int i=0;i<26;i++)
        {
            ht[i]=0;
        }
    }

    return 0;
}

