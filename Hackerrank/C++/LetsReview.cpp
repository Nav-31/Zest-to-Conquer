#include<iostream>
using namespace std;
int main()
{
    int t,i,l=0,j,x,m,n;
    cin>>t;
    string s[t];

    for(i=0;i<t;i++)
    {
        cin>>s[i];
    }
    
   for(i=0;i<t;i++)
   {
       int k=0,m=0;
       l=s[i].size();
       for(j=0;j<l;j++)
       {    
           
           for(j=0;j<l;j=j+2)
           cout<<s[i][j];
           cout<<" ";
           for(j=1;j<l;j=j+2)
           cout<<s[i][j];
           cout<<endl;
       }
         
      }
}

