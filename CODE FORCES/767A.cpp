#include<bits/stdc++.h>
using namespace std;
bool mark[100001];

int main()
{
    int n,x;
    cin>>n;
    int m=n;
    while(n--)
    {
        cin>>x;
        mark[x]=true;
        while(mark[m])
        {
            cout<<m<<" ";
            m--;
        }
        cout<<endl;

    }
    return 0;

}
