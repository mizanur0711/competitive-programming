#include<bits/stdc++.h>
using namespace std;
bool leapyear(int year)
{
    return ((year%4==0 && year%100!=0) || (year%400==0));
}
int main()
{
    int t;
    while(cin>>t && t)
    {
        long long pred=0,prem=0,prey=0,prec=0;
        long long cons=0,totalc=0;
            for(int i=0;i<t;i++)
            {
                long long d,m,y,c;
                cin>>d>>m>>y>>c;

                if(pred==31 && prem==12 && d==1 && m==1 && y-prey==1)
                {
                    cons++;
                    totalc+=c-prec;
                }
                else if(prey==y)
                {
                    if(prem==m)
                    {
                        if(d-pred==1)
                        {
                            cons++;
                            totalc+=c-prec;
                        }
                    }
                    else if(m-prem==1 && d==1)
                    {
                        bool next = (prem==1 && pred==31);

                        next=next || (!leapyear(y) && prem==2 && pred==28);
                        next=next || (leapyear(y) && prem==2 && pred==29);
                        next=next || (prem==3 && pred==31);
                        next=next || (prem==4 && pred==30);
                        next=next || (prem==5 && pred==31);
                        next=next || (prem==6 && pred==30);
                        next=next || (prem==7 && pred==31);
                        next=next || (prem==8 && pred==31);
                        next=next || (prem==9 && pred==30);
                        next=next || (prem==10 && pred==31);
                        next=next || (prem==11 && pred==30);

                        if(next)
                        {
                            cons++;
                            totalc+=c-prec;
                        }

                    }
                }
                pred=d;
                prem=m;
                prey=y;
                prec=c;

            }
            cout<<cons<<" "<<totalc<<endl;
    }
    return 0;

}
