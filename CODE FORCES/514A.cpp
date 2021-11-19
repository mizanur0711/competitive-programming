#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>'4')
        {
            if(!(i==0 && arr[i]=='9'))
            {
             arr[i]='0'+9-arr[i]+'0';
            }
        }
    }
        cout<<arr<<endl;
    return 0;
}
