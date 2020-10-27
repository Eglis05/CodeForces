//https://codeforces.com/contest/1/problem/A

#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
    long long int m,n,a;
    cin >> m >> n >> a;
    if (m % a == 0) {
        if (n % a == 0) {
            cout << m*n/(a * a );
            return 0;
        }
        cout << (n/a + 1) * (m/a);
        return 0;
    }
    if (n % a == 0) {
        cout << (m/a + 1) * (n/a);
        return 0;
    }
    cout << (m/a + 1) * (n/a + 1);
}