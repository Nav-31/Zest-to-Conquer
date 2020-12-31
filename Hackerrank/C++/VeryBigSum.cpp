#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the size of the array";
    cin>>n;
    long int a[n],sum=0;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;

}
