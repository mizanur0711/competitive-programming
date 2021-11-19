#include <bits/stdc++.h>
using namespace std;
bool prime[100000];
    //memset(prime, true, sizeof(prime));


void SieveOfEratosthenes(int n)
{
memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

}
int main()
{
    SieveOfEratosthenes(100000);
    int n;
    cin>>n;
    for(int i=1*pow(10,n-1);i<9*pow(10,n-1);i++)
    {
        if(prime[i]==true )
        {
            int counter=0;
            int k=i;
            for(int j=0;j<n;j++)
            {
                if(k%10!='0')
                {
                    k=k/10;
                    counter++;
                }

            }
            if(counter==n)
            {
                cout<<i<<counter<<endl;
                break;

            }
        }
    }
    return 0;
}
