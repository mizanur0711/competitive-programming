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
        int n,c=0;
        cin>>n;
        bool flag=true;
        while(n!=1)
        {
            if(n%6==0 || ((n/6)>=6 && n%6==0)|| (n/6==1 && n%6==0 ))
               {
                   n=n/6;
                   c++;
               }
            else if(n==2 || (n*2)%6!=0)
            {
                flag=false;
                break;
            }
            else
                {
                    n=n*2;
                    c++;

                }
        }
        if(flag)
        {
        cout<<c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}
