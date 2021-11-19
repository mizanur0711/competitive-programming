#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<int >v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ans=0;
    int f=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]>2*v[f])
        {
            f++;
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
