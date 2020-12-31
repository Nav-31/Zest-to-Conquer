#include <iostream>
#include <cstdio>
#include<stdlib.h>
using namespace std;
void eng(int m,int n);
void evenOdd(int m,int n);
int m,n;

int main() {
    
    cin>>m>>n;
    if(m==0||n==0)
        exit(1);

    if(m<=9&&n<=9)
        eng(m,n);
    else if(m>9&&n>9) 
    {
        evenOdd(m,n);
    }
    else if(m<=9&&n>9)
    {
        eng(m,n);
        evenOdd(m=10,n);
        
    }
        

}
void eng(int m,int n)
{
    for(int i=m;i<=n;i++)
    {
        
    if(i==1)
        cout<<"one"<<endl;

        else if(i==2)
        cout<<"two"<<endl;

        else if(i==3)
        cout<<"three"<<endl;

        else if(i==4)
        cout<<"four"<<endl;

        else if(i==5)
        cout<<"five"<<endl;

        else if(i==6)
        cout<<"six"<<endl;

        else if(i==7)
        cout<<"seven"<<endl;

        else if(i==8)
        cout<<"eight"<<endl;

        else if(i==9)
        cout<<"nine"<<endl;
        
        
    }
    
}
void evenOdd(int m,int n)
{   
    for(int i=m;i<=n;i++)
{
    if(i%2==0)
    cout<<"even"<<endl;
    else
    cout<<"odd"<<endl;
    
}
}
