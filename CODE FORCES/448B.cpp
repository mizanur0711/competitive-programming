#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0,j=0;i<s1.size();i++)
        {
            if(s1[i]==s2[j])
            {
                j++;
            }
            if(!s2[j])
            {
                cout<<"automaton"<<endl;
                return 0;
            }
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"array"<<endl;
            return 0;
        }
        else
        {
            for(int i=0,j=0;i<s1.size();i++)
        {
            if(s1[i]==s2[j])
            {
                j++;
            }
            if(!s2[j])
            {
                cout<<"both"<<endl;
                return 0;
            }

        }
        }
        cout<<"need tree"<<endl;

    }
    return 0;
}
