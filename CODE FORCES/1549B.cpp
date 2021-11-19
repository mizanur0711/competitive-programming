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
        string me,en;
        cin>>en>>me;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(en[i]=='0' && me[i]=='1')
            {
             c++;
            }
            else if(en[i]=='1' && me[i]=='1')
            {
                if(en[i-1]=='1' && i-1>=0)
                {
                c++;
                en[i-1]='0';
                }
                else if(en[i+1]=='1' && i+1<n)
                {
                c++;
                en[i+1]='0';
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
