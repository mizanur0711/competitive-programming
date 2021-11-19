#include<bits/stdc++.h>
using namespace std;
int ht[26]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,sum=0;
        cin>>n>>q;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            ht[s[i]-'a']++;
        }
        for(int i=0;i<q;i++)
        {
            int c;
            cin>>c;
            sum=0;
            for(int j=0;j<26;j++)
            {
                if(ht[j]>c)
                {
                    sum=sum+(ht[j]-c);
                }
            }
            cout<<sum<<endl;
        }
             for(int i=0;i<26;i++)
        {
            ht[i]=0;
        }


    }
    return 0;
}
