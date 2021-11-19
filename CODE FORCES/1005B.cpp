#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int counter=0;
    while(1)
    {
        int a=s1.size()-counter-1;
        int b=s2.size()-counter-1;
        if(a>=0 && b>=0 && s1[a]==s2[b])
        {
            counter++;
        }
        else
            break;
    }

    cout<<s1.size()+s2.size()-2*counter<<endl;
    return 0;
}
