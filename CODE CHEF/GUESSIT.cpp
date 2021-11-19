#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void cal()
{
    for(int i=1;i<=1e6+5;i++)
    {
        int x=sqrt(i);
        if(x*x==i)
        {
            v.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    cal();
    while(t--)
    {
        for (int p: v)
        {
            cout<<p<<endl;;
            fflush(stdout);
            int x;
            cin>>x;
            if(x==1)
            {
                break;
            }
            else
            {
                continue;
            }

        }
    }
    return 0;
}
