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
        int ht[101];
        for(int i=0;i<101;i++)
        {
            ht[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ht[x]++;
        }
        vector<int>v;
        for(int i=0;i<101;i++)
        {
            if(ht[i]>0)
            {
                cout<<i<<" ";
            }
            if(ht[i]>1)
            {
                int y=ht[i];
                y--;
                while(y--)
                {
                    v.push_back(i);
                }
            }
        }
        if(v.size())
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
