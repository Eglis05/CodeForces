//https://codeforces.com/gym/100796/problem/H

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long side1,side2,corners;
    cin >> side1 >> side2;
    corners = ((side1+1)*side2+(side2+1)*side1-abs(side1-side2))/2;
    cout << corners;
}