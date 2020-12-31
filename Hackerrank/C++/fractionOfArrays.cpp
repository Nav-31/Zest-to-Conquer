#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,n,a[50],p=0,m=0,z=0;
    double c,v,b;

    cout<<"Enter the size of the array:";
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
cout<<"Pos:"<<p<<endl<<"Neg:"<<m<<"\nZeros:"<<z<<endl;


c=p/t;
v=m/t;
b=z/t;

cout<<"\n Ratio of Positive Numbers:";
std::cout<<fixed<<setprecision(6)<<c<<endl;
cout<<"\n Ratio of Negative Numbers:";
std::cout<<fixed<<setprecision(6)<<v<<endl;
cout<<"\n Ratio of Zeroes:";
std::cout<<fixed<<setprecision(6)<<b<<endl;



}
