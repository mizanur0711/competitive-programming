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
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1)
        {
            cout<<s<<endl;
        }
        else
        {
            int c=0,i=n/2;
            {
                while(c<n)
                {
                    if(i%((2*n+1)/2)==0)
                    {
                        i=n/2;
                    }
                    cout<<s[i];
                    c++;
                    i++;
                }
                 cout<<endl;

            }
        }
    }

    return 0;
}

