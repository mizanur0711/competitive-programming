#include<iostream>
using namespace std;
int main()
{
    int t,a,b,counter=0;
    cin>>t;
    for(int i=0;i<t;i++)

    {
        cin>>a>>b;
        if(a<(b-1))
        {
            counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}
