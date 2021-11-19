#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=10;
    while(x>0)
    {
        if(n%x==0)
        {
            cout<<x<<endl;
            return 0;
        }
        x--;
    }
    return 0;
}
