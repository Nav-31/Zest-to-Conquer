#include<iostream>
using namespace std;
int main()
{
    int n,i,j, diff=0,sum1=0,sum2=0;
    cout<<"Enter the size of the matrix:";
    cin>>n;
    int p[n][n];
    cout<<"Enter the elements of the matrix:";

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        {
            cin>>p[i][j];
        }
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        {
            cout<<p[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        {
            if(i==j)
            {
                sum1=sum1+p[i][j];
            }
        }
    }

    cout<<"Sum1="<<sum1<<endl;

    i=0;
    j=n-1;

    for(int k=0;k<n;k++)
        {
            sum2=sum2+p[i][j];
            i++;
            j--;
        }

    cout<<"Sum2="<<sum2<<endl;

if (sum1>sum2)
{
    diff=sum1-sum2;
}
else
{
    diff=sum2-sum1;
}

cout<<"The absolute difference is:"<<diff;

}

