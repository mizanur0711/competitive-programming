#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r1,r2,c1,c2,d1,d2;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    for(int i=1;i<=9;i++)
    {
        if(i>=r1) continue;
        int j=r1-i;
        int l=c1-i;
        int r=c2-j;
        if(i+j==r1 && l+r==r2 && i+l==c1 && j+r==c2 && i+r==d1 && l+j==d2 && i!=j && i!=l && i!=r && j!=l && j!=r && l!=r && j>0 && l>0 && r>0 && j<=9 && l <=9 && r<=9)
        {
            cout<<i<<" "<<j<<endl;
            cout<<l<<" "<<r<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}

