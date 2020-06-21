#include<iostream>
using namespace std;
int MinSum(long int a[]);
int MaxSum(long int a[]);
long int SortArray(long int a[]);

int i,j;
long int a[5],temp=0,minsum=0,maxsum=0;

int main()
  {
    cout<<"Enter 5 elements:";
    for(i=0;i<5;i++)
        {
            cin>>a[i];
        }
    
    SortArray(a);
    MinSum(a);
    MaxSum(a);
  }
  

    long int SortArray(long int a[])
    {
        cout<<"Unsorted array: ";
        for(i=0;i<5;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(a[j]>a[j+1])
                {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                }
            }
        }
        cout<<"Sorted array: ";
        for(i=0;i<5;i++)
            {
                cout<<a[i]<<" ";
            }
                
    } 
    
    
    int MinSum(long int a[])
    {
        for(i=0;i<4;i++)
        minsum=minsum+a[i];
        cout<<endl<<"MinSum="<<minsum<<endl;

    }
    
    int MaxSum(long int a[])
    {
        for(i=1;i<5;i++)
        maxsum=maxsum+a[i];
        cout<<"MaxSum="<<maxsum<<endl;

    }
    
    
    
    
        




