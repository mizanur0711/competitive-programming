#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,o=0,e=0;
    cin>>n;
    set<int >odd,even;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x%2)
        {
            o++;
            odd.insert(i);
        }
        else
        {
            e++;
            even.insert(i);
        }
    }
    if(e==1)
    {
        cout<<*even.begin()<<endl;
    }
    else
    {
        cout<<*odd.begin()<<endl;
    }
    return 0;
}
