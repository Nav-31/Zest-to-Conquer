#include<iostream>
using  namespace std;
int main()
{

    int p=0,i,j,temp=0;
    cout<<"Enter her age:";
    long int n;
            cin>>n;
    long int a[n];

    cout<<endl<<"Enter the heights of the candles:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }


    for(i=0;i<n;i++)
    {
        if(a[i]>temp)
            temp=a[i];
    }


      for(i=0;i<n;i++)
      {
          if(a[i]==temp)
            p++;


      }
      cout<<endl<<p;





}
