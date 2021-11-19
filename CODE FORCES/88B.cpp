#include<bits/stdc++.h>
using namespace std;
int cal(int a,int b,int c,int d)
{
    return (c-a)*(c-a)+(d-b)*(d-b);
}
int ht[26];
bool ht2[26];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x;
    cin>>n>>m>>x;
    vector< string >arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<26;i++)
    {
        ht[i]=55*55;
        ht2[i]=false;
    }
    vector< pair<int , int> >v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='S')
            {
                v.push_back(make_pair(i,j));
            }
        }
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]!='S')
            {
                int ind=(arr[i][j]-'a');
                ht2[ind]=true;
                //cout<<"->"<<ind<<" ";
                for(int p=0;p<v.size();p++)
                {
                    ht[ind]=min(ht[ind],cal(i,j,v[p].first,v[p].second));
                }
            }
        }
    }
    int l;
    string s;
    cin>>l;
    cin>>s;
    int ans=0;
    for(char &c:s)
    {
        if(islower(c))
        {
            if(!ht2[c-'a'])
            {
                cout<<"-1"<<endl;
                return 0;
            }
        }
        else
        {
            if(!ht2[c-'A'])
            {
                cout<<"-1"<<endl;
                return 0;
            }
            if(ht[c-'A']==55*55)
            {
                cout<<"-1"<<endl;
                return 0;
            }
            if(ht[c-'A']>x*x)
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}
