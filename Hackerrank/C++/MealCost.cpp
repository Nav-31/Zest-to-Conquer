#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    float c,t;
    int tp, tx;
    cout<<"Enter MealCost, TipPercent and Tax Percent:";
    cin>>c>>tp>>tx;

    t= c+ c*tx/100+c*tp/100;
    cout<<round(t);

}
