#include<bits/stdc++.h>
using namespace std;
bool ht[110];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       vector<int >v;
       for(int i=0;i<2*n;i++)
       {
           int s;
           cin>>s;
           if(ht[s]==false)
           {
               ht[s]=true;
               v.push_back(s);
           }

       }
       vector<int>::iterator ptr;
           for(ptr=v.begin();ptr<v.end();ptr++)
           {
               cout<<*ptr<<" ";
           }
           cout<<endl;
           for(int i=0;i<110;i++)
           {
               ht[i]=false;
           }
       }

    return 0;
}

