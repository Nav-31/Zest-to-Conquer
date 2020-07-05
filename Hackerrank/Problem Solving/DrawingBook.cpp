ook#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if(n==1)
        cout<<"0";
    else if(n==m-1)
    {
        if(n%2==0)
            cout<<"0";
        else
        cout<<"1";

    }
        
    else if((n-1)==(m-n))
        cout<<min(n/2,((m-n)/2));
        
    else if((n-1)<(m-n))
    {
        cout<<(n/2);
    }
    else
    {
        cout<<((m-n)/2);
    }
}
