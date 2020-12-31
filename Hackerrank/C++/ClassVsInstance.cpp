#include<iostream>
using namespace std;
class Person
{
    
public:
    int age;
    Person(int initialAge)
    {
        if(initialAge<0)
        {
            age=0;
            cout<<"Age is not valid, setting age to 0.";
        }
            
        else
        {
            age=initialAge;
        }
    }
    
    void yearPasses()
    {
        age++;
    }
    void amIOld()
    {
        if(age<13)
            cout<<"You are young";
        else if(age>=13 && age<18)
            cout<<"You are a teenager";
        else
            cout<<"You are old";
    }
};

int main()
{
    int n,i,ia;
    cout<<"Enter the no. of Testcases";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[n];  
    }
    
    for(i=0;i<n;i++)
    {
        ia=a[i];
        Person x(ia);
        
    }  
}

