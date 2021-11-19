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
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v[i]%2==0)
                {
                    ans+=v[i];
                }
            }
            else
            {
                if(v[i]%2)
                {
                    ans-=v[i];
                }
            }
        }
        if(ans==0)
        {
            cout<<"Tie"<<endl;

        }
        else if(ans>0)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }

    return 0;
}

