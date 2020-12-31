#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";int k,j;
    string q,p;
    double b,f;

    cin>>j;

    cin>>f;
    cin.ignore();
    getline(cin,p);


    k=i+j;
    b=f+d;
    q=s+p;

    cout<<k<<endl;
    std::cout<<fixed<<setprecision(1)<<b<<endl  // header is imp
    cout<<q;
}
