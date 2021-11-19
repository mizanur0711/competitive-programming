#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    while(t--)
    {

    cin>>n>>m;
    int tot=n*m,b,w;
    if(tot%2==0)
    {
         b=tot/2+1;
         w=tot/2-1;
    }
    else
    {
        b=(tot+2)/2;
        w=(tot-2)/2;
    }
    bool flag=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b+1>w)
            {
                cout<<"B";
                b--;
            }
            else if(w>b-1)
            {
                cout<<"W";
                w--;
            }

        }
        cout<<endl;
    }

}
return 0;

}
