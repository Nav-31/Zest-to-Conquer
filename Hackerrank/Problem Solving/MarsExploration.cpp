#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.

int marsExploration(string s)
{
    int i,l,count=0;

    string ref="SOS";
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(ref[i%3]!=s[i])
        {
            count++;
        }
    }
    return(count);
}

int main()
{
    string s;
    getline(cin, s);

    int result = marsExploration(s);

    cout << result << "\n";
}
