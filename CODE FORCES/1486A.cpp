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
        set<int >s;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
            sum+=x;
        }
        int need=(n*(n-1))/2;
        need--;
        vector<int> v;
        int flag=1;
        if(s.size()==1)
        {
            for(int x : s)
        {
            v.push_back(x);
        }
            if(v[0]==0 || (v[0]==1 && n>2) || (v[0]==2 && n>3) || (sum<need))
            {
                cout<<"NO"<<endl;
            }
            else
            {
               // flag=0;
                cout<<"YES"<<endl;
            }
        }
        else if(s.size()==2)
        {
            for(int x : s)
        {
            v.push_back(x);
        }
      //  cout<<v[0]<<" "<<v[1]<<endl;
            if(v[0]==0 && v[1]==1 && n>2)
            {
                cout<<"NO"<<endl;
            }
            else if((v[1]!=1)&&sum<need)
           {
            cout<<"NO"<<endl;
           }
            else
            {
              //  flag=0;
                cout<<"YES"<<endl;
            }
        }
        else
        {
            if(sum<need)
           {
            cout<<"NO"<<endl;
           }
           else
           {
            cout<<"YES"<<endl;
           }
        }
        s.clear();
        v.clear();
    }

    return 0;
}

