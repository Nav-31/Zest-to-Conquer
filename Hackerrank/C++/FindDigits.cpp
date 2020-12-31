#include<iostream>
using namespace std;
void findDigits(int t,int a[]);
int t,i,d=0,num=0,c,x;
int main()
{   
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[t];
    }
    
    findDigits(t,a);
}

void findDigits(int t,int a[])
{

    for(i=0;i<t;i++)
    {
        x=a[i];
        c=0;
        num=a[i];
        do
        {
            d=x%10;
            if(num%d==0)
            {
                c++;
            }
                
            x=x/10;
            
        }while(x!=0);
        
       cout<<c<<endl; 
    }
}
