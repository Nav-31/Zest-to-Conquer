#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int q,x,y,z,i,a[100][3],d1,d2;
    cin>>q;

    for(i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        a[i][0]=x;
        a[i][1]=y;
        a[i][2]=z;
    }

    for(i=0;i<q;i++)
    {
        d1=abs(a[i][0]-a[i][2]);
        d2=abs(a[i][1]-a[i][2]);
        if(d1<d2)
        cout<<"Cat A"<<endl;
        else if(d2<d1)
        cout<<"Cat B"<<endl;
        else if(d1==d2)
        cout<<"Mouse C"<<endl;
    }

}

