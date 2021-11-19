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
        int n,o=0,e=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x%2==1)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if(o)
        {
            cout<<e<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}

