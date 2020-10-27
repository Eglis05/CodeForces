//https://codeforces.com/contest/1064/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c,maxim;
    cin >> a >> b >> c;
    if (a < b) {
        maxim = a;
        a = b;
        b = maxim;
    }
    if (a < c) {
        maxim = a;
        a = c;
        c = maxim;
    }
    if (b < c) {
        maxim = b;
        b = c;
        c = maxim;
    }
    if (a-b-c < 0) {
        cout << "0";
    }
    else {
        cout << a-b-c+1;
    }
}