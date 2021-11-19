#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int cntp=0,cntr=0;
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        if (s1[i]=='r' && s1[i+1]=='u' && cntr==0)
        {
            if(s1[i-1]=='p' && cntp==1)
            {
               s2=s2+s1[i];
            }
            else
            {
            s2=s2+".ru";
            if(i+2>=s1.size())
            {
                break;
            }
            else
                s2=s2+"/";
            i++;
            cntr++;
            continue;
           }
        }
        else if(s1[i]!='p' || cntp !=0 )
        {
            s2=s2+s1[i];
            if(s1[i]=='p')
            {
                cntp++;
            }
            continue;
        }
        else if(s1[i]=='p'  && cntp==0)
        {
            s2=s2+s1[i];
            s2=s2+ "://";
            cntp++;
            continue;
        }
    }
    cout<<s2<<endl;
    return 0;
}
