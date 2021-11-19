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
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        if(x==y)
        {
            cout<<n<<" "<<n<<endl;
        }
        else
        {
            map<int,pair<int,int> > mp;
            if(x<y)
            {
                swap(x,y);
                mp[1]={n-x+y,n};
                mp[2]={n,n-x+y};
                mp[3]={x-y,0};
                mp[4]={x-y,0};

            }
            else
            {
                mp[1]={n,n-x+y};
                mp[2]={n-x+y,n};
                mp[3]={0,x-y};
                mp[4]={x-y,0};
            }
            int ans=((k-1)%4)+1;
            cout<<mp[ans].first<<" "<<mp[ans].second<<endl;
        }
    }

    return 0;
}

