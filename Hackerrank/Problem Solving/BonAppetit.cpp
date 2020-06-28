#include<iostream>
using namespace std;
void overcharge(int n,int k,int a[]);
int  n,k,price,sum=0,i;
int main()
{
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    overcharge(n,k,a);
}
void overcharge(int n,int k,int a[])
{
    cin>>price;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    int ap=(sum-a[k])/2;
    if(price==ap)
    cout<<"Bon Appetit";
    else
    cout<<price-ap;
}


