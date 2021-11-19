#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n,c=1,inc=1;
        bool flag=false;
        cin>>w>>h>>n;
        while(w!=0 && h!=0)
        {
            if(w%2==0)
            {
                w=w/2;
                c=c+inc;
            }
            else if(h%2==0)
            {
                h=h/2;
                c=c+inc;
            }
            if(c>=n)
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            if(w%2==1 && h%2==1)
            {
                break;
            }
            inc=inc*2;
        }
        if(!flag)
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

