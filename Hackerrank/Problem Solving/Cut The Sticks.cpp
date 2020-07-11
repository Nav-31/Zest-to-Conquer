#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> arr;
    int i,n,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }

sort(arr.begin(),arr.end());        //ascending
reverse(arr.begin(),arr.end());     //descending


while(!arr.empty())
{
cout<<arr.size()<<endl;
for(int i = 0; i<arr.size();i++)
    arr[i]=arr[i]-arr.back();
while(arr.back() ==0 && !arr.empty())
    arr.pop_back();

}
            

}
