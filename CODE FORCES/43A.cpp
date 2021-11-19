#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
    string s;
    vector<string> team;
   // string::iterator it;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        team.push_back(s);

    }
    std::sort(team.begin(),team.end());
//for(auto it : team)
   // for(string::iterator it=team.begin(); it !=team.end();it++)
   //for(auto string::iterator it : team)
   string ax =team.front();
   string bx =team.back();
   for(int i=0;i<n;i++)
    {
        if(team[i]==ax && team.front() != team.back())
        {
            a++;
        }
        else if(team.front() != team.back() &&  team[i]==bx)
        {
            b++;
        }
    }
    if(a>b)
    {
        cout<<team.front()<<endl;
    }
    else
    {
        cout<<team.back()<<endl;
    }
    return 0;

}
