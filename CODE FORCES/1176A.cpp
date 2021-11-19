#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,counter=0;
        cin>>n;
        while(n!=0)
        {
            if(n%2==0)
            {
                n=n/2;
                counter++;
            }
            else if(n%3==0)
            {
                n=(n*2)/3;
                counter++;
            }
            else if(n%5==0)
            {
                n=(n*4)/5;
                counter++;
            }
            else
            {
                break;
            }

        }
        if(n==1)
        {
            cout<<counter<<endl;

        }
        else
        {
           cout<<"-1"<<endl;
        }
    }
    return 0;
}
