#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<"2"<<endl;
        int last=n;
        for(int i=n-1;i>0;i--)
        {
            cout<<last<<" "<<i<<endl;
            last=(last+i+1)/2;
        }
    }
    return 0;
}
