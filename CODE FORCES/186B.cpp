#include<bits/stdc++.h>
using namespace std;
bool c(pair<double,int> &a,pair<double,int> &b)
{
    if(a.first!=b.first)
    {
    return a.first>b.first;
    }
    else
    {
        return a.second<b.second;
    }
}
int main()
{
    int n;
    double t1,t2,k;
    cin>>n>>t1>>t2>>k;
    vector< pair<double,int> >v(n);
    for(int i=0;i<n;i++)
    {
        double x,y;
        cin>>x>>y;
        v[i].first=max(x*t1-x*t1*(k/100)+y*t2,y*t1-y*t1*(k/100)+x*t2);
        v[i].second=i+1;
    }
    sort(v.begin(),v.end(),c);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].second<<" "<<fixed<<setprecision(2)<<v[i].first<<endl;
    }
    return 0;
}
