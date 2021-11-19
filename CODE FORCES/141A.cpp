#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3;
    s4=s1+s2;
    int counter=0;
    std::sort(s3.begin(),s3.end());
    std::sort(s4.begin(),s4.end());
    if(s3.size()==s4.size())
    {
        for(int i=0;i<s3.size();i++)
        {
            if(s3[i]==s4[i])
            {
                continue;
            }
            else
            {
                counter++;
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;

    }
    if(counter==0 && s3.size()==s4.size())
    {
        cout<<"YES"<<endl;
    }
    else if(counter>0)
    {
        cout<<"NO"<<endl;
    }
    return 0;

}
