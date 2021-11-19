#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m[5][5],x,y,val;
    float fval;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>m[i][j];
            if(m[i][j]==1)
            {
                x=i;
                y=j;
                continue;
            }
            else
                continue;
        }
    }
    fval=sqrt(pow(x-2,2)+pow(y-2,2));
    if(fval<2.5)
    {
    val=ceil(fval);
    cout<<val<<endl;
    }
    else
    {
         val=ceil(fval);
    cout<<val+1<<endl;
    }

    return 0;
    }
