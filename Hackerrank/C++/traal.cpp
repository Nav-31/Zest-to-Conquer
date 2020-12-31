#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,j,oc=0,ho=0,fb=0,fb1=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[n];
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                oc++;
        }
        if(oc>ho)
        {
            ho=oc;
            fb=a[i];
        }
            
        else if(ho==oc)
            fb1=a[i];
            
            
    }
    
    if (fb<fb1)
        cout<<fb;
    else 
        cout<<fb1;
}

