#include<iostream>
using namespace std;

double f[100000][100000]={0};
     long long int n,q,i,j,x,y,l=0;
     int main()
{
     
        cin>>n>>q;
        double query[q][2];
        for(i=0;i<n;i++)
        {
            cout<<"Enter d size";
            cin>>l;
            int a[l];
            for(j=0;j<l;j++)
            {
                cin>>a[j];
            }
            
            for(j=0;j<l;j++)
            {

                f[i][j]=a[j];
            }            
        }
        
        for(i=0;i<q;i++)
        {
            for(j=0;j<2;j++)
            {
                cin>>query[i][j];
            }
        }
        for(i=0;i<q;i++)
        {
            for(j=0;j<1;j++)
            {
                x=query[i][j];
                y=query[i][j+1];
                cout<<f[x][y]<<endl;
            }
            
        }
}
