#include<iostream>
using namespace std;
int j=0,i,n;
int clouds(int n,int a[])
{   
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]==1)
        {
            i++;
            j++;
        }
        else if(a[i+2==0])
        {
            j++;
            i++;
        }
        else
        {
            j++;
        }
      
    }
    
    return j;
    
}
int main()
{
    
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cout<<clouds(n,a);
}
