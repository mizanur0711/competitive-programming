#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>ans[3];
    for(int i=0;i<3;i++)
    {
        ans[i].first=0;
        ans[i].second=i;
    }
    string s;
    for(int i=0;i<3;i++)
    {
        cin>>s;
        if(s[1]=='>')
        {
            ans[s[0]-65].first++;
        }
        else
        {
            ans[s[2]-65].first++;
        }

    }
    sort(ans,ans+3);
    if(ans[0].first==ans[1].first || ans[1].first==ans[2].first)
    {
        cout<<"Impossible"<<endl;

    }
    else
    {
        for(int i=0;i<3;i++)
        {
            cout<<(char)(ans[i].second + 65);
        }
        cout<<endl;

    }
    return 0;
}
