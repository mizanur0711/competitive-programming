#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        vector <long long > arr;
        for(int i=0;i<n;i++)
        {
            int c;
            cin>>c;
            arr.push_back(c);
        }
        long long sum=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%x==0)
            {
                int y=x;
                while(y--)
                {
                    arr.push_back(arr[i]/x);
                }
            }
            else
            {
                break;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
        }

        cout<<sum<<endl;
    }

    return 0;
}

