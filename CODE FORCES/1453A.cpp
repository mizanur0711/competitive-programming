#include<bits/stdc++.h>
using namespace std;
bool ht[101];
void null()
{
    for(int i=0;i<=100;i++)
    {
        ht[i]=false;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        null();
        int c=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ht[x]=true;
        }
        for(int i=0;i<m;i++)
        {
            int y;
            cin>>y;
            if(ht[y]==true)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

