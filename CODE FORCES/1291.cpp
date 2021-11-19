#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        string s;
        cin>>n>>s;
        sum=accumulate(s.begin(),s.end(),(n*(-48)));
        if(n==1 && (s[0]-48)%2==0)
        {
            cout<<"-1"<<endl;
        }
        else if(sum%2==0 && (s[n-1]-48)%2!=0)
        {
            cout<<s<<endl;
        }
        else if((sum-1)%2==0 && (s[n-1]-48)%2!=0)
        {
            for(int i=n-1;i>=0;i--)
            {
                if((s[i]-48)==1)
                {
                    s.erase(s.begin()+i);
                    break;
                }
            }
            cout<<s<<endl;
        }
        else if((sum-(s[n-1]-48))%2==0 && (s[n-1]-48)%2==0)
        {
            s.erase(s.begin()+n-1);
            if((s[n-2]-48)%2==0)
            {
                cout<<"-1"<<endl;
            }
            else
            cout<<s<<endl;
        }
        else if((sum-2)%2==0 && (s[n-1]-48)%2!=0)
        {
            for(int i=n-1;i>=0;i--)
            {
                if((s[i]-48)==2)
                {
                    s.erase(s.begin()+i);
                    break;
                }
            }
            cout<<s<<endl;
        }

        else
        {
            cout<<"-1"<<endl;
        }

    }
    return 0;

}
