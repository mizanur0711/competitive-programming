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
     string a,b;
     cin>>a>>b;
     int ans=0;
     for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            {
                if(a[i]==b[j])
                {
                    int x=0;
                    int p=i,k=j;
                    while(a[p]==b[k] && (p<a.size() && k<b.size()))
                    {
                        p++;
                        k++;
                        x++;
                    }
                    ans=max(ans,x);
                  //  cout<<x<<" ";
                }
            }
        }
        cout<<(a.size()+b.size())-2*ans<<endl;
    }
    return 0;
}
