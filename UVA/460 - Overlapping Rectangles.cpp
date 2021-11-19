#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    int px1,py1,px2,py2;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>px1>>py1>>px2>>py2;
        int i,j,k,l;
        i=max(x1,px1);
        j=max(y1,py1);
        k=min(x2,px2);
        l=min(y2,py2);
        if(i<k&&j<l)
        {
            cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
        }
        else
        {
            cout<<"No Overlap"<<endl;
        }
        if(t)
        {
            cout<<endl;
        }
    }
}
