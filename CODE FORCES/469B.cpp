#include<bits/stdc++.h>
using namespace std;
int ht[10010];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(ht,0,sizeof(ht));
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int w=p,y=q;
    vector<pair<int,int>>x;
    int a,b;
    for(int j=0;j<p;j++)
    {
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            ht[i]=1;
        }
    }
   for(int j=0;j<q;j++)
    {
        cin>>a>>b;
        x.push_back({a,b});
    }
    int res=0;
    for(int i=l;i<=r;i++)
    {
        for(int j=0;j<x.size();j++)
        {
            bool flag=0;
            for(int k=x[j].first+i;k<=x[j].second+i;k++)
            {
                if(ht[k]==1)
                {
                    res++;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    cout<<res<<endl;


    return 0;
}

