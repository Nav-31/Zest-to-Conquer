#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2;  //starting pt and speed;
    cin>>x1>>v1>>x2>>v2;
    
    for(int i=0;i<10000;i++)
    {
        x1+=v1;
        x2+=v2;
        if(x1==x2)
        {
            cout<<"YES";
            exit(1);
        }
    }
    cout<<"NO";
}
