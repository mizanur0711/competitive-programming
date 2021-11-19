
#include<bits/stdc++.h>
using namespace std;
string g[3];
bool check_row(char c)
{
    for(int i=0;i<3;i++)
    {
        if(g[i][0]==c && g[i][1]==c && g[i][2]==c)
        {
            return true;
        }
    }
    return false;
}

bool check_col(char c)
{
    for(int i=0;i<3;i++)
    {
        if(g[0][i]==c && g[1][i]==c && g[2][i]==c)
        {
            return true;
        }
    }
    return false;
}
bool check_dig(char c)
{
    if(g[0][0]==c && g[1][1]==c && g[2][2]==c)
    {
        return true;
    }
    if(g[2][0]==c && g[1][1]==c && g[0][2]==c)
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        string temp;
        cin>>temp;
        bool possible=true;
        if(temp=="end")
        {
            break;
        }
        g[0]=temp.substr(0,3);
        g[1]=temp.substr(3,3);
        g[2]=temp.substr(6,3);
        int cx=0,co=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(g[i][j]=='X')
                {
                    cx++;
                    continue;
                }
                if(g[i][j]=='O')
                {
                    co++;
                }
            }
        }
        if(co>cx)
        {
            possible=false;
        }
        if(cx-co>1)
        {
            possible=false;
        }
        bool winnerx=(check_row('X') || check_col('X') || check_dig('X'));
        if(winnerx)
        {
            if(cx-co!=1)
            {
                possible=false;
            }
        }

        bool winnero=(check_row('O') || check_col('O') || check_dig('O'));
        if(winnero)
        {
            if(cx-co!=0)
            {
                possible=false;
            }
        }
        if(winnero==true && winnerx==true)
        {
            possible=false;
        }
          if(winnero!=true && winnerx!=true)
        {
            if(cx+co!=9)
            {
            possible=false;
            }
        }
        if(possible)
        {
            cout<<"valid"<<endl;
        }
        else
        {
            cout<<"invalid"<<endl;
        }
    }

    return 0;
}

