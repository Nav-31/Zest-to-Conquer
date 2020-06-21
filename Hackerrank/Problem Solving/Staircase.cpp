#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the no. of rows in staircase:";
        cin>>n;
        int a=n-1,b=0;

       for(i=0;i<n+1;i++)
       {
           for(i=a;i>0;i--)
            cout<<" ";
           a--;

           for(i=0;i<=b;i++)
            cout<<"#";
           b++;

           cout<<"\n";
       }
}



