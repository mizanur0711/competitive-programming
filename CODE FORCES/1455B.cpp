#include<bits/stdc++.h>
using namespace std;
vector <int > v;
int sum=0;
void store()
{
    for(int i=1;i<1000000;i++)
    {
        sum=sum+i;
        if(sum<=1000007)
        {
        v.push_back(sum);
        }
        else
        {
            break;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    store();
    //cout<<" last"<<sum<<endl;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int pos=lower_bound(v.begin(), v.end(), x) - v.begin();
        if(v[pos]==x)
        {
            cout<<pos+1<<endl;
        }
        else if(abs(v[pos]-x)==1)
        {
            cout<<pos+2<<endl;
        }
        else
        {
            cout<<pos+1<<endl;
        }
    }

    return 0;
}

