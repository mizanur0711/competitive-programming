#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tk5=0,tk10=0,tk15=0;
        bool flag=true;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==5)
            {
                tk5++;
            }
            else if(x==10 && tk5>=1)
            {
                tk10++;
                tk5--;
            }
            else if(x==15 && (tk10>=1 || tk5>=2 ))
            {
                tk15++;
                if(tk10<1)
                {
                    tk5=tk5-2;
                }
                else
                {
                    tk10--;
                }

            }
            else
            {
                flag=false;
            }

        }
        if(flag)
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
