#include<iostream>
#include<stdlib.h>
using namespace std;

int GradingSystem(int n,int a[]);
int n,i;


int main()
{
    
    cout<<"Enter the number of Entries:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    GradingSystem(n,a);
}

int GradingSystem(int n,int a[])            // Rounds off d grade if >38 and 53,54,55=55
{
    for(i=0;i<n;i++)
    {
        if(a[i]<0||a[i]>100)
            exit(1);
            
        if(a[i]>=38)
        {
            if(a[i]%5>=3)
                a[i]=a[i]+(5-(a[i]%5));
        }
            
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
