//https://codeforces.com/contest/1076/problem/C

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    setprecision(10);
    int t,d;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> d;
        if (d==1 || d ==2 || d==3) {
            cout << "N " << endl;
        }
        else {
            cout << "Y " << setprecision(11) << (long double) d/2 + (long double)
            sqrt(d * d - 4*d)/2 << " " << (long double) d/2 -
            (long double) sqrt(d * d - 4*d)/2 << endl;
        }
    }
}