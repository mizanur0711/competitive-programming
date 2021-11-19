#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a,b,counter=0;
    cin>>n;
    cin>>x;
    int m=n;
    while(n--)
    {
        cin>>a>>b;
        if(x==1 || x==6)
        {
            if((a==5 || a==4 || a==2 || a==3 ) && (b==5 || b==4 || b==2 || b==3))
            {
                counter++;
            }
        }
        else if(x==3 || x==4)
        {
            if((a==5 || a==1  || a==2 || a==6 ) && (b==5 || b==1 || b==2 || b==6))
            {
                counter++;
            }
        }
        else if(x==5 || x==2)
        {
            if((a==4 || a==1  || a==3 || a==6 ) && (b==4 || b==1 || b==3 || b==6))
            {
                counter++;
            }
        }
    }
    if(counter==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
