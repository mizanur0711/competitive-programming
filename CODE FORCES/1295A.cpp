#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int counter=0;
        cin>>n;
        if(n<=3)
        {
            if(n==3)
            {
                cout<<"7"<<endl;
                continue;
            }
            else
            {
                cout<<"1"<<endl;
                continue;
            }
        }
         else if(n>=4)
         {
             counter=n/2;
             while(counter--)
             {
                 cout<<"1";
             }
             cout<<endl;

         }

    }
    return 0;

}
