#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p=0,temp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            {
                p=p+n;
                temp=p;
            }
            for(int j=0;j<n;j++)
            {
                if(i%2==1)
                {
                    cout<<temp<<" ";
                    temp--;
                }
                else
                {
                    p++;
                    cout<<p<<" ";
                }

            }
            cout<<endl;
        }
    }
    return 0;
}
