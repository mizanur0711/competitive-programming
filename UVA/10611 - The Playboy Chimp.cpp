#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin>>n;
    vector<int >arr;
    for(int i=0;i<n;i++)
    {
        long long y;
        cin>>y;
        arr.push_back(y);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int mn=lower_bound(arr.begin(), arr.end(),x)-arr.begin()-1;
        int mx=upper_bound(arr.begin(), arr.end(),x)- arr.begin();
        if(mn>0 && mx>=n)
        {
            cout<<arr[mn]<<" "<<"X"<<endl;
        }
        else if(mn>=0 && mn<n && mx>=0 && mx<n)
        {
            cout<<arr[mn]<<" "<<arr[mx]<<endl;
        }
        else if(mn<0 && mx<n)
        {
            cout<<"X"<<" "<<arr[mx]<<endl;
        }
        else
        {
            cout<<"X X"<<endl;
        }
    }

    return 0;
}

