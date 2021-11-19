#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long a,b,c,d;
    long long x,y,x1,y1,x2,y2;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        int temp=a+b+c+d;
        for(int i=0; i<temp; i++)
        {
            if(x-1>=x1 && x-1<=x2 && a>0)
            {
                x=x-1;
                a--;
            }
            else if(x+1>=x1 && x+1<=x2 && b>0)
            {
                x=x+1;
                b--;
            }
            else if(y+1>=y1 && y+1<=y2 && d>0)
            {
                y=y+1;
                d--;
            }
            else if(y-1>=y1 && y-1<=y2 && c>0)
            {
                y=y-1;
                c--;
            }
        }

        if( a+b+c+d==0)
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
