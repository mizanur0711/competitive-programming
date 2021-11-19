#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,counter;
    cin>>n>>m;
    bool flag=false;
    for(i=n+1;i<=m;i++)
    {
        counter=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                counter++;
            }
        }
           if(counter==0)
        {
            if(i==m)
        {
            cout<<"YES"<<endl;
           return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;

        }
        }
    }
        cout<<"NO"<<endl;
        return 0;

}
