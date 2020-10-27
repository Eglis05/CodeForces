//https://codeforces.com/contest/1076/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main () {
    unsigned long long int n;
    bool ok =false;
    cin >> n;
    if (n % 2 == 0) {
        cout << n/2;
        return 0;
    }
    for (unsigned long long int i=3; i<= sqrt(n); i+=2) {
        if (n % i == 0) {
            ok = true;
            n -= i;
            break;
        }
    }
    if (ok) cout << 1+ n/2;
    else    cout << "1";
}