#include<iostream>
using namespace std;
void reverseArray(int n,int a[]);
int i,n;
int main()
{
    cout<<"Enter the length of the array:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reverseArray(n,a);
}

void reverseArray(int n,int a[])
{
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}
