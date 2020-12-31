#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int p[n];

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=p[i];
    }

    cout<<"Sum="<<sum;
}
