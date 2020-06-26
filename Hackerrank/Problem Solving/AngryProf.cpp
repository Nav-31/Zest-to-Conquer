#include<iostream>
using namespace std;
int x,i,j,p,y;


int main()
{
    int t;
    cin>>t;
    int n[t],k[t],a[t][1000];
    
    for(i=0;i<t;i++)
    {
        cin>>n[i]>>k[i];
        int x=n[i];
        for(j=0;j<x;j++)
            cin>>a[i][j];
        
    }
       
        for(i=0;i<t;i++)
        { 
            p=0;  
            y=n[i];
            for(j=0;j<y;j++)
            {
                if(a[i][j]<=0)
                    p++;
            }
            if(p>=k[i])
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }
    
    

