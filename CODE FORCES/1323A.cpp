#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0,od=0;
        vector<int >odd;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                e=i+1;
            }
            else
            {
                od++;
                odd.push_back(i+1);
            }
        }
        if(e>0)
        {
            cout<<"1"<<endl;
            cout<<e<<endl;
        }
        else if(od>1)
        {
            cout<<"2"<<endl;
            cout<<odd[0]<<" "<<odd[1]<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}
