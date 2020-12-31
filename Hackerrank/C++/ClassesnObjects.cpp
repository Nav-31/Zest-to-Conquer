
#include<iostream>
using namespace std;

class Student
{
public:        
    int i,j,score[][5];    
    void input(int n)
    {   
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                cin>>score[i][j];
        }
    }
};
 int main()
 {
    
     Student x;
     int n,sum=0,ks=0,c=0,i,j;
     cin>>n;
     x.input(n);
     
     for(i=0;i<5;i++)
     {
         ks=ks+x.score[0][i];
     }
     
     for(i=1;i<n;i++)
     {
         for(j=0;j<5;j++)
         {
             sum=sum=x.score[i][j];
         }
         if(sum>ks)
         {
             c++;
         }
         sum=0;
         
     }
     
     cout<<c;
     
 }
