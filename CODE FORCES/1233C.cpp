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
        vector<int > v(n);
        for(int i=0;i<n;i++)
        {
         cin>>v[i];
        }
        int i=0,ans=0;
        for( ;i<v.size();i++)
        {
            if(v[i]>v[i+1])
            {
                v[i]++;
                if(a)
                v.erase(v.begin()+i);
                i=0;
                continue;
            }
            else if(v[i-1]<v[i])
            {
                v[i]++;
                ans=i;
                v.erase(v.begin()+i-1);
                i=0;
                continue;
            }
        }
        if(v.size()<n)
        {
            cout<<ans+1<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

