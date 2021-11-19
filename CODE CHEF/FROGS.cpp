#include<bits/stdc++.h>
using namespace std;
int ht[200];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        memset(ht,0,sizeof(ht));
        vector<pair <int,int> > v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i].first;
            ht[i]=v[i].first;
        }
        for(int i=0;i<n;i++)
        {
            cin>>v[i].second;
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            int j=v[i].second;
            while(1)
            {
                if(v[i].first>ht[j])
                {
                    ht[j]=v[i].first;
                    c++;
                    break;
                }
                else
                    j+=v[i].second;

            }
        }
        cout<<c<<endl;
}
return 0;
}
