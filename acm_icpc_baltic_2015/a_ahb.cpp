//https://codeforces.com/gym/100796/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string x1,x2,ok;
    ok = "True";
    int i,number;
    number = 0;
    i = 0;
    cin >> x1 >> x2;
    for ( ; i < x1.size(); i++)
    {
        if (abs(x1[i]-x2[i]) == 0 && ok == "True");
        else
            {
                ok = "False";
                number += ((abs(x1[i]-x2[i]))) * (pow(10,x1.size()-i-1));
            }
    }
    cout << number;
    return 0;
}