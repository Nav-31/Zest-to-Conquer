#include<iostream>
using namespace std;
int main()
{
    int a[3],b[3],i,p=0,q=0,r;   //size of d array is 3


    cout<<"Enter Alice's Score:";

    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter Bob's Score:";

    for(i=0;i<3;i++)
    {
        cin>>b[i];
    }

    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            p++;
        }

        else if(a[i]<b[i])
        {
            q++;
        }


    }

    cout<<p<<"\t"<<q;
}
