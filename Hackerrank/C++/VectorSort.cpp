#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> v;
    int n,i,a=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());

    for(i=0;i<n;i++)
    cout<<v[i]<<" ";

    return 0;
}
