#include<iostream>
#include<stdlib.h>
using namespace std;
void tables(int n);
int main()
{
    int n;
    cout<<"Enter an Integer:";
    cin>>n;
    tables(n);
    if(n<2||n>20)
        exit(1);
    
}

void tables(int n)
{
    for (int i=1;i<11;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
}
