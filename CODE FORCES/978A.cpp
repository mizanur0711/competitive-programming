#include<bits/stdc++.h>
using namespace std;
bool ht[1010];
int main()
{
    int n,counter=0;
    vector<int >v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        for(int j=0;j<v.size();j++)
        {
        if(v[i]==v[j] && j<i)
        {
            ht[j]=true;

        }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(ht[i]==false)
        {
            counter++;
        }

    }
    cout<<counter<<endl;


      for(int i=0;i<v.size();i++)
    {
        if(ht[i]==false)
        {
            cout<<v[i]<<" ";
        }

    }
    cout<<endl;
}
