#include<iostream>
using namespace std;
int bday(int n,int a[],int m,int d);
int m,n,i,j,d,c=0,s=0;
int main()
{
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>d>>m;
    cout<<bday(n,a,m,d);
    
}

int bday(int n,int a[],int m,int d)
{
    for(i=0;i<n;i++)
    {
       for(j=i;j<(i+m);j++)
       {
           s=s+a[j];
       }
       
       if(s==d)
        c++;
       s=0;
    }
    return c;
}

