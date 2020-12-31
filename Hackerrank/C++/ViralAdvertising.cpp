#include<iostream>
using namespace std;
int main()
{
    int n,p,c,i;
    cin>>n;
    
    p=5;
    
    for(i=0;i<n-1;i++)
    {
        c=(p/2)*3;
        p=c;
    }
    cout<<c;
}
