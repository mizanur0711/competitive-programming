#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        int c=0,d=0;
        int counter=0;
        if(a==b)
        {
            cout<<"NO"<<endl;

        }
        else if(b>a)
        {

            for(int i=1;i<=a;i++)
            {
                if((a-i==0) && (b-(2*i))==0)
                {
                    cout<<"yes"<<endl;
                    counter++;
                    break;
                }
                else if((a-i)>(b-(2*i)))
                {
                    c=a-i;
                    d=b-(2*i);
                    for(int j=1;j<=d;j++)
                    {
                        if((c-(2*i)==0) && (d-i)==0)
                {
                    cout<<"yes"<<endl;
                    counter++;
                    break;
                }
                    }
                }
            }
            if(counter==0)
            {
                cout<<"NO"<<endl;
                break;

            }


        }

    }
    return 0;

}
