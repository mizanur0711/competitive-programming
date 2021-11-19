#include<iostream>
using namespace std;
int main()
{
    int n,s,v;
    cin>>n;
    v=n-1;
    for (int i=1;i<n-1;i++)
    {
        if((v%i)==0)
        {
            s=i;
            cout<<s<<endl;
        }
        else

            continue;
    }
    //cout<<s<<endl;
    return 0;
}
