#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<2*n-2;i++)
    {
        string s;
        cin>>s;
    }
    for(int i=0;i<2*n-2;i++)
    {
        if(i%2==0)
        {
            cout<<"P";
        }
        else
            cout<<"S";
    }
    cout<<endl;
}
