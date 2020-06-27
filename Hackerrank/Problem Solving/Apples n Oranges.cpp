#include<iostream>
using namespace std;

int CountApples(int m,int s,int t,int a,int ap[]);
int CountOranges(int n,int s,int t,int b,int og[]);
string h,tr,f;
int i,ah=0,oh=0,s,t,a,b,m,n,d=0;
int main()
{
    cout<<"Enter s and t:";          //coordinates of the house
    cin>>s>>t;
    cout<<"Enter a and b:";         //coordinates of the trees
    cin>>a>>b;
    cout<<"Enter m and n:";         //no of apples and oranges
    cin>>m>>n;
    int ap[m],og[n];
    
    cout<<"Enter the distances at which the apples fell:";
    for(i=0;i<m;i++)
    {
        cin>>ap[i];
    }
    
    cout<<"Enter the distances at which the oranges fell:";
    for(i=0;i<n;i++)
    {
        cin>>og[i];
    }

cout<<CountApples(m,s,t,a,ap)<<endl;                //gives d no. of apples on house
cout<<CountOranges(n,s,t,b,og);                     //oranges
    
}


int CountApples(int m,int s,int t,int a,int ap[])        //Apples on house
{
    for (i=0;i<m;i++)
    {
        if(ap[i]>0)
        {
            d=a+ap[i];
            if(d>=s&&d<=t)
                ah++;
        }
            
            
    }
    cout<<endl;
    
    return ah;
}

int CountOranges(int n,int s,int t,int b,int og[])        //Oranges on house
{
    for (i=0;i<n;i++)
    {
        if(og[i]<0)
        {
            d=b+og[i];
            if(d>=s&&d<=t)
                oh++;
        }
            
        }
        
          return oh; 
            
    }
    

