#include<iostream>
#include<climits>
#include<assert.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;


    if(n<1||n>100)
        assert(1);

     else if(n%2!=0)
        cout<<"Weird";

    else if(n>=2&&n<=5)
        cout<<"Not Weird";

    else if(n>=6&&n<=20)
        cout<<"Weird";

    else if(n>20)
        cout<<"Not Weird";





}
