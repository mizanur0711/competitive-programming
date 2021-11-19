
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
        vector<long long> v;
        for(int i=0;i<n;i++)
        {
            long long  x;
            cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<n-1;i++)
        {
            if(v[i]>i)
            {
            v[i+1]=v[i+1] + (v[i]-i);
            v[i]=i;
            }

        }
        int j=0;
        int flag=1;
        for( j=0;j<n-1;j++)
        {
         //   cout<<v[j]<<" ";
            if(v[j]>=v[j+1])
            {
                flag=0;
            }
        }
//        vector<int >z;
//        if(s.size()==1)
//        {
//           for(int x : s)
//        {
//            z.push_back(x);
//        }
        if(flag) // || (s.size()==1 && z[0]>1))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
}

    return 0;
}

