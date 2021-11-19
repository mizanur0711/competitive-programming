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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans ="ESWN";
        int ind=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                ind++;
                if(ind==4)
                {
                    ind=0;
                }
            }
            else
            {
                ind--;
                if(ind==-1)
                {
                    ind=3;
                }
            }
        }
        cout<<ans[ind]<<endl;
    }

    return 0;
}

