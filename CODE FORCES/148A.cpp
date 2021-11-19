#include<bits/stdc++.h>
using namespace std;
bool ht[100005];
int main()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int k1=k,l1=l,m1=m,n1=n;
    for(int i=1;i<=d;i++)
    {
        if(k<=d)
        {
            ht[k]=true;
            k=k+k1;
        }
        if(l<=d)
        {
            ht[l]=true;
            l=l+l1;
        }
        if(m<=d)
        {
            ht[m]=true;
            m=m+m1;
        }
        if(n<=d)
        {
            ht[n]=true;
            n=n+n1;
        }
    }
    int ans=0;
    for(int i=1;i<=d;i++)
    {
        if(ht[i]==true)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;

}
