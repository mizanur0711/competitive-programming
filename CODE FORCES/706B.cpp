#include<bits/stdc++.h>
using namespace std;
int ht[100009];
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ht[x]++;
    }
    for(int i=1;i<=100009;i++)
    {
        ht[i]+=ht[i-1];
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        if(y>100009)
        {
            cout<<n<<endl;
        }
        else
        {
        cout<<ht[y]<<endl;
        }
    }
    return 0;
}
