#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    char ans,k='a';
    queue<char>a,b,c;
    for(int i=0;i<(int)s1.size();i++)a.push(s1[i]);

    for(int i=0;i<(int)s2.size();i++)b.push(s2[i]);

    for(int i=0;i<(int)s3.size();i++)c.push(s3[i]);
    while(1)
    {
        if(k=='a')
        {
            if(a.size()==0)
            {
                ans='A';
                break;
            }
            else
                k=a.front();
                a.pop();

        }
           if(k=='b')
        {
            if(b.size()==0)
            {
                ans='B';
                break;
            }
            else
                k=b.front();
                b.pop();

        }
           if(k=='c')
        {
            if(c.size()==0)
            {
                ans='C';
                break;
            }
            else
                k=c.front();
                c.pop();

        }
    }
    cout<<(char)(ans)<<endl;
    return 0;
}

