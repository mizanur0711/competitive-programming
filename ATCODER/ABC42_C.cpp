#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    bool ht[10]={false};
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        ht[x]=true;
    }
    for(int i=0;i<=10*n;i++)
    {
        if(i>=n)
        {
        bool checked=true;
        string S=to_string(i); ////it doesnt work here try online compile
        for(int j=0;j<S.size();j++)
        {
            if(ht[S[j]-'0'])
            {
                checked=false;
            }
        }
        if(checked)
        {
            cout<<i<<endl;
            return 0;
        }
        }
    }

}
