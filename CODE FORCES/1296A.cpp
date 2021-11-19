#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;

        bool eflag=false,oflag=false;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            sum=sum+x;
            if(x%2==1)
            {
                oflag=true;
            }
            if(x%2==0)
            {
                eflag=true;
            }

        }

        if((eflag && oflag) || sum%2==1)
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
