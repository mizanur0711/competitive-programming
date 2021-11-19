#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int sl=s.size();
        int tl=t.size();
        if(s.front()==t.front() && s.back()==t.back())
        {
            int l=(sl*tl)/__gcd(sl,tl);
            int t1=l/sl;
            int t2=l/tl;
            string anst="",anss="";
            while(t1--)
            {
                anss=anss+s;
            }
            while(t2--)
            {
                anst=anst+t;
            }
            if(anss==anst)
            {
                cout<<anss<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }

    return 0;
}

