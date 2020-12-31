#include<iostream>
#include<vector>
using namespace std;
int main()
{
     vector <int> pq;
     int i,s;
     pq.assign(7,12);       //Creating vector vth 7 - 12tyms
     
     
     cout<<"Display d vector:"; 
     s=pq.size();
     for(i=0;i<s;i++)
        cout<<pq[i]<<" ";
     
     pq.push_back(22);             //inserting 22 at d end
     s=pq.size();
     cout<<"\nThe last element:";
     cout<<pq[s-1];
     
     pq.pop_back();
     
     cout<<"\nThe last element:";
    s=pq.size();
     cout<<pq[s-1];
     
     pq.insert(pq.begin(),5);
     cout<<"\nDisplay d vector:"; 
     s=pq.size();
     for(i=0;i<s;i++)
        cout<<pq[i]<<" ";
     
     
     
            
        
}
