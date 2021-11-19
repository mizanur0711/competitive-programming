
#include<bits/stdc++.h>
using namespace std;
struct contestant
{
    int sol;
    int penlty;
};
bool comp(contestant a,contestant b)
{
    if(a.sol!=b.sol)
    {
        return a.sol>b.sol;
    }
    if(a.sol==b.sol)
    {
        return b.penlty>a.penlty;
    }
}
int main()
{
    struct contestant c[51];
    int n,k,counter=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>c[i].sol;
        cin>>c[i].penlty;
    }
    std::sort(c,c+n,comp);
    int x=c[k-1].sol;
    int y=c[k-1].penlty;
    for(int i=0;i<n;i++)
    {
        if(c[i].sol==x && c[i].penlty==y)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
