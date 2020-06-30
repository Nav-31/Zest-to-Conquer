#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,k,i,temp=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>temp)
        temp=a[i];
    }

    if(temp>k)
    cout<<temp-k;
    else 
    cout<<"0";

}
