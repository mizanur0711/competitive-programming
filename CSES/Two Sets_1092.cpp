#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        long long int n;
        cin>>n;
        if(n<=2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            long long int s=(n*(n+1))/2;
            if(s%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                long long int sum=s/2;
                set<long long int >s1,s2;
                long long i=1,s1sum=0; //,s2sum=0;
                while(s1sum<=sum)
                {
                  //  cout<<i<<" ";
                    s1.insert(i);
                    s1sum+=i;
                    i++;
                }
               // cout<<"s1s  "<<s1sum<<endl;
                if(s1sum>sum)
                {
                    long long x=s1sum-sum;
                    s1.erase(x);
                    s2.insert(x);
                 //   cout<<"minus "<<x<<endl;
                }
                while(i<=n)
                {
                    s2.insert(i);
                    i++;
                }
                cout<<"YES"<<endl;
                cout<<s1.size()<<endl;
                for(auto &p:s1)
                {
                    cout<<p<<" ";
                }
                cout<<endl;
                cout<<s2.size()<<endl;
                for(auto &p:s2)
                {
                    cout<<p<<" ";
                }
                cout<<endl;
            }

        }
    }
    return 0;
}
