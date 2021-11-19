#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        int n;
        cin>>n;
        int a=0,b=0;
        string s;
        cin>>s;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='1')
                {
                    a++;
                }
            }
            else
            {
                if(s[i]=='1')
                {
                    b++;
                }
            }
            if(abs(a-b)>(2*n-i)/2)
            {
                flag=false;
                cout<<i+1<<endl;
                break;
            }

        }
        if(flag)
        {
            cout<<2*n<<endl;
        }
    }
    return 0;
}
