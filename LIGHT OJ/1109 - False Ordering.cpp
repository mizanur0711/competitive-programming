#include<bits/stdc++.h>
using namespace std;
struct Number{
    int no;
    int cnt;
};
vector< Number > a(1000);
bool cmp(Number &x,Number &y)
{
    if(x.no > y.no)
    {
        return x.cnt <= y.cnt;
    }
    else
    {
        return (x.cnt < y.cnt);
    }

}
void storing()
{

    for(int i=1;i<=1000;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        a[i].no=i;
        a[i].cnt=c;
       // cout<<" "<<i<<" "<<c<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    storing();
    sort(a.begin(),a.end()+1,cmp);
    cin>>t;
    int p=0;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"Case "<<++p<<": "<<a[n].no<<endl;
    }

    return 0;
}

