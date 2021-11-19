#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int > arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int y;
        cin>>y;
        auto x=upper_bound(arr.begin(),arr.end(),y);
        cout<<x-arr.begin()<<endl;
    }
    return 0;
}
