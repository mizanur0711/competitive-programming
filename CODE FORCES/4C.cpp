#include<bits/stdc++.h>
using namespace std;
map<string,int> name;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        if(name.find(s)==name.end())
        {
            cout<<"OK"<<endl;
            name[s]++;
        }
        else
        {
            cout<<s<<name[s]<<endl;
            name[s]++;
        }

    }


    return 0;
}

