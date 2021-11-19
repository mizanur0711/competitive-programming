#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0,j=0;
    string s1,s2="hello";
    cin>>s1;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
            counter++;
        }

    }
     if(counter==5)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
    return 0;
}

