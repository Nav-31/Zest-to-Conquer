#include<iostream>
using namespace std;
int i,j,n;
class Student
{   
public:
   
    void input(int n)
    {   
        int score[n][5];
        
        for (i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                cin>>score[i][j];
        }
        
         for (i=0;i<n;i++)
        {
            for(j=0;j<5;j++)
                cout<<score[i][j]<<" ";
                cout<<endl;
        }
    }
};
int main()
{   
    
    cin>>n;
    Student x;
    x.input(n);
    for(i=0;i<n;i++)
    {
        ks=ks+score[0][i];
    }
    
}
