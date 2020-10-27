//https://codeforces.com/contest/25/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,a[103];
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (a[0]%2 != a[1]%2 && a[0]%2!=a[2]%2) {
        cout << "1";
        return 0;
    }
    for (int i=0; i<n; i++) {
        if (a[i]%2 != a[0]%2) {
            cout << i+1;
            return 0;
        }
    }
}