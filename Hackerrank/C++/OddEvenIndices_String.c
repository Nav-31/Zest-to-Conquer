#include<iostream>
using namespace std;
int n,i;
string s[];
int main()
{
    cout<<"Enter the no of test cases:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    
    for(i=0;i<n;i++)
    {
        cout<<s[i];
    }
    
    
}
