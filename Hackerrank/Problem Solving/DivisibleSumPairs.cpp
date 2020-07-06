#include<iostream>
using namespace std;
int divisiblePairs(int n,int k,int a[]);
int n,s=0,k,p=0,i,j;
int main()
{
    
    cin>>n>>k;
    int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
    
    cout<<divisiblePairs(n,k,a);
}

int divisiblePairs(int n,int k,int a[])
{
     for(i=0;i<n;i++)
        {
        for (j=i+1;j<n;j++)
        {
            s=a[i]+a[j];
            if(s%k==0)
                p++;
        }
        }
        return p;
     
}
