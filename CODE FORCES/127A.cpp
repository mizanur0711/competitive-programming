#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    double sum=0.0;
    pair<double,double> previous;
    cin>>previous.first>>previous.second;
    for(int i=0;i<n-1;i++)
    {
        pair<double ,double > now;
        cin>>now.first>>now.second;
        sum=sum+sqrt((now.first-previous.first)*(now.first-previous.first)+(now.second-previous.second)*(now.second-previous.second))/50.0;
        previous.first=now.first;
        previous.second=now.second;

    }
    cout<<fixed<<setprecision(9);
    cout<<sum*k<<endl;
    return 0;
}
