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
        int temp=1;
        cout<<temp;
        for(int i=1;i<n;i++)
        {
            if(s[i]-'0'+1==s[i-1]-'0'+temp)
            {
                temp=0;
                cout<<temp;
            }
            else
            {
                temp=1;
                cout<<temp;
            }
        }
        cout<<endl;
    }

    return 0;
}

