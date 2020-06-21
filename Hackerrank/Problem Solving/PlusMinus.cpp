#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,n,a[50],p=0,m=0,z=0;
    double c,v,b;

    cin>>n;
    double t=n;
    int q[n];

    for(i=0;i<n;i++)
    {
        cin>>q[i];
    }


for(i=0;i<n;i++)
{
    if(q[i]>0)
        p++;
    else if(q[i]<0)
        m++;

    else
        z++;

}

c=p/t;
v=m/t;
b=z/t;

std::cout<<fixed<<setprecision(6)<<c<<endl;

std::cout<<fixed<<setprecision(6)<<v<<endl;

std::cout<<fixed<<setprecision(6)<<b<<endl;

}
