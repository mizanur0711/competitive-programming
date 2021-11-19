#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,sum=0;
    cin>>n>>k;
    sum=n;
    while(n-k>=0)
    {
    n=n-k;
    sum++;
    n++;
    }
    cout<<sum<<endl;

    return 0;
}

