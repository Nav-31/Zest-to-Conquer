#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n,q,i,j,l,x,y;
    cin>>n>>q;
    int query[q][2];
    vector<vector<int> > pq(n);
   
    
    for(i=0;i<n;i++)                    //input d vector
    {
        cin>>l;
        pq[i] = vector<int>(l);         //dis line is imp
        for(j=0;j<l;j++)
            cin>>pq[i][j];
    }
    
    for (int i=0;i<n;i++)                //display of vector
        { 
            for (int j=0; j<pq[i].size(); j++) 
            cout <<pq[i][j]<< " "; 
            cout<< endl; 
        } 

    
    for(i=0;i<q;i++)
    {
        for(j=0;j<2;j++)
            cin>>query[i][j];
    }
    
    
    for(i=0;i<n;i++)
    {
        
            x=query[i][0];
            y=query[i][1];
            cout<<pq[x][y]<<endl;
            
        
    }
    
    
}
