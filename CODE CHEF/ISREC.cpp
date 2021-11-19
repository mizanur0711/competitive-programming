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
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int c=0;
        int minx=INT_MAX,maxx=0,miny=INT_MAX,maxy=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j]=='1')
                {
                 c++;
                 minx=min(minx,i);
                 maxx=max(maxx,i);
                 miny=min(miny,j);
                 maxy=max(maxy,j);
                }
            }
        }

        if(((maxx-minx+1)*(maxy-miny+1)==c) && c>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        //    cout<<"c"<<c<<" r"<<r<<" "<<ans<<endl;

    }

    return 0;
}

