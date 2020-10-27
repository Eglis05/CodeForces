//https://codeforces.com/gym/100796/problem/L

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int smile,frown,n;
    smile = 0;
    frown = 0;
    string x;
    cin >> n;
    cin >> x;
    for (int i=0;i<n;i++)
    {
        string nothing;
        nothing = "";
        nothing += x[i];
        nothing += x[i+1];
        if (nothing == ":)" || nothing == "(:")
        {
            smile += 1;
        }
        else if (nothing == ":(" || nothing == "):")
        {
            frown += 1;
        }
    }
    if (smile > frown)
    {
        cout << "HAPPY";
    }
    else if (smile < frown)
    {
        cout << "SAD";
    }
    else
    {
        cout << "BORED";
    }
    return 0;
}