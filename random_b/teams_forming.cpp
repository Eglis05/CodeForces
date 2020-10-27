//https://codeforces.com/contest/1092/problem/B

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, *p;
    cin >> n;
    p = new int[n];
    for (int i=0; i<n; i++) {
        cin >> p[i];
    }
    sort(p, p+n);
    int esum=0, osum=0;
    for (int i=0; i<n; i+=2) {
        esum += p[i];
        osum += p[i+1];
    }
    cout << abs(esum-osum);
    return 0;
}