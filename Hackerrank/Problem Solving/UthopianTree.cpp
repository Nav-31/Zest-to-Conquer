#include<iostream>
using namespace std;
void tree(int n,int a[]);

int main()
{   
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
        
        tree(n,a);
}

void tree(int n,int a[])
{   
    int i,p=0,x=0,k;
    
    for(i=0;i<n;i++)
    {
       
        x=a[i];
        
        if(x==0)
            p=1;
        else
        {   
            p=1;
            for(k=1;k<x+1;k++)
            {
                if(k%2!=0)
                {
                     p=2*p;
                }
                   
                
                else if(k%2==0)
                {
                     p++;
                }
                   
            }
        }
        cout<<p<<endl;
    }
}
