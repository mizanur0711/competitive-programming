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
        long long a,b,counter=0;
        cin>>a>>b;
        while(a!=b)
        {
            if(a<b)
            {
                if(a*8<=b)
                {
                    a=a*8;
                    counter++;
                }
                else if(a*4<=b)
                {
                    a=a*4;
                    counter++;
                }
                else if(a*2<=b)
                {
                    a=a*2;
                    counter++;
                }
                else
                {
                    break;
                }
            }
            else if(a>b)
            {
                 if(b*8<=a)
                {
                    b=b*8;
                    counter++;
                }
                else if(b*4<=a)
                {
                    b=b*4;
                    counter++;
                }
                else if(b*2<=a)
                {
                    b=b*2;
                    counter++;
                }
                else
                    break;
            }
            else
            {
                break;
            }

        }
        if(a==b)
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
