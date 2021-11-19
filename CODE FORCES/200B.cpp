#include<iostream>
#include<iomanip>
#include<stdio.h>
double sum=0;
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum=sum/n;
    printf("%.12lf\n",sum);
    //std::cout<<setprecision(12)<<sum<<endl;
     return 0;

}
