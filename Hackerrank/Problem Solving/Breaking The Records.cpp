#include<iostream>
using namespace std;
int main()
{
    int n,i,max=0,min=0,b=0,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }   
    max=a[0];
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            b++;
        }
        if(a[i]<min)
        {
            min=a[i];
            c++;
        }
    }
    cout<<b<<" "<<c;
}
