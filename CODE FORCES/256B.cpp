//wrong no.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int l=s.size(),c=0;;

    for(int i=0;i<l;i++)
    {
        c++;
        for(int j=0,k=s.size()-1;j<s.size();j++,k--)

           {
            if(s[j]!=s[k])
            {
                break;
            }
            if(j==k || (s[j]==s[k]) && abs(j-k)==1)
            {
                if(c%2==1)
                {
                    cout<<"First"<<endl;
                }
                else
                {
                    cout<<"Second"<<endl;
                }
                return 0;
            }
        }
        s.erase(s.begin()+0);
    }

    return 0;
}

