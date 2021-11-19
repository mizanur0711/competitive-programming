#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int len;
    len=n.size();
    if(n[0]!='-')
    {
        cout<<n<<endl;
    }
    else
    {

    if(n[len-1]>n[len-2])
    {
        n.erase(len-1);
        cout<<n<<endl;;
    }
    else
    {
        n.erase(n.begin()+len-2);
        if(n[1]=='0' && n.size()==2)
        {
        cout<<"0"<<endl;
        }
        else
        {
        cout<<n<<endl;
        }
    }

    }
    return 0;
}
