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
        pair<int,int > v[n+1];
        bool ht[n+1];
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            v[i].first=x;
            v[i].second=i;
            ht[i]=true;
        }
        sort(v,v+n);
        int counter=0,neg_C=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int v1=v[i].second;
                int v2=v[j].second;
                if(ht[i]==false || ht[j]==false)
                {
                    break;
                }

                if((v2%v1==0))
                {
                    ht[i]=false;
                    ht[j]=false;
                    if(v[i].first==v[j].second)
                    {
                        neg_C++;
                    }
                   // counter++;
                    break;
                }
            }


        }
        for(int i=1;i<=n;i++)
        {
            if(ht[i]==false)
            {
                //cout<<v[i].first<<"  ";
                counter++;
            }
        }
        if(counter==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
        cout<<" xx"<<counter-neg_C<<endl;
        }
    }

    return 0;
}

