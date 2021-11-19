#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,k;
    cin>>n>>k;
    for(int i=0,j=0;i<n;i++,j++)
    {
        if(j==k)
        {
            j=0;
        }
            cout<<(char)('a'+j);
    }
    cout<<endl;

}
return 0;
}
