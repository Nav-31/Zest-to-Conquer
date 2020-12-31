#include<iostream>
using namespace std;
void countEven(string s[],int n);
int n,i,l=0;


int main()
{
    cout<<"Enter the no of test cases:";
    cin>>n;
    string s[n];
        for(i=0;i<=n;i++)
    {
        getline(cin,s[i]);
    }
   // countEven(s,n);
    for(i=0;i<=n;i++)
    {
        cout<<s[i]<<endl;
    }
      cout<<s[0][0];
}
//void countEvenOdd(string s[],int n)
//{
//    for(i=1;i<=n;i++)
//    {
//        l=s[i].length();
//        c
//        string even[l];
//        string odd[l];
//        even[0]=s[0];
//        if(i%2==0)
//            even[i]=s[i];
//        else
//            odd[i]=s[i];        
//        
//    }
//    cout
//}
