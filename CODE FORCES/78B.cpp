#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="ROYGBIV";
    int n;
    cin>>n;
    for(int i=0,j=0;j<n;j++,i++)
    {
        cout<<s[i];
        if(i==6)
        {
            i=2;
        }
    }
    cout<<endl;
    return 0;



}
