#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!='A' &&s1[i]!='E' && s1[i]!='I' && s1[i]!='O' && s1[i]!='U' && s1[i]!='a' && s1[i]!='i' &&s1[i]!='o' &&s1[i]!='e' &&s1[i]!='u'&& s1[i]!='y' &&s1[i]!='Y')
        {
            if(s1[i]<='Z')
            {
                char c=s1[i]+32;
                s2=s2+"."+c;
            }
            else
            {
                s2=s2+"."+s1[i];
            }
        }
    }
    cout<<s2<<endl;
    return 0;

}
