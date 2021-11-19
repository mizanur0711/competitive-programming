#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sc,nxt,left,right;
    cin>>sc>>nxt;
    size_t d=sc.find("|") ;//store the index no. of delimeter(|)
    left =sc.substr(0,d);
    right=sc.substr(d+1);
    int tot_len=left.size()+right.size()+nxt.size();
    if(left.size()+nxt.size()==right.size())
    {
        cout<<left+nxt<<"|"<<right<<endl;
    }
    else if(right.size()+nxt.size()==left.size())
    {
        cout<<left<<"|"<<right<<nxt<<endl;
    }
    else if (tot_len%2==0)
    {
        int l_n,r_n;
        l_n=(tot_len/2)-left.size();
        r_n=(tot_len/2)-right.size();
        if(l_n>=0 && r_n>=0)
        {
            left=left+nxt.substr(0,l_n);
            right=right+nxt.substr(l_n,r_n);
            cout<<left<<"|"<<right<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }

    }
    else
    {
         cout<<"Impossible"<<endl;

    }

    return 0;
}
