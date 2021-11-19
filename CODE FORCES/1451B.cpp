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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int l,r;
        while(q--)
        {
            cin>>l>>r;
            if(l>r)
        {
            swap(l,r);
        }
        l--;
        r--;
        int c=r-l+1;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[l])
            {
                if(i==l)
                {
                    if((s[i+1]==s[l]) && n-i+1>=c)
                    {
                        i++;
                    }
                    else
                    {
                    c--;
                    }
                }
                l++;
            }
            if(l==r+1)
            {
                break;
            }
        }
        if(l==r+1 && c>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
       }
    }

    return 0;
}

