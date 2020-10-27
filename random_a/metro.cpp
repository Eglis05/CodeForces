//https://codeforces.com/contest/1055/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,s,a[1004],b[1004];
    cin >> n >> s;
    for (int i=0; i<n; i++) {
        scanf("%i", &a[i]);
    }
 
    for (int i=0; i<n; i++) {
        scanf("%i", &b[i]);
    }
    if (a[0] == 0) {cout << "NO"; return 0;}
    if (a[s-1] == 1) {cout << "YES"; return 0;}
    if (b[s-1] == 0) {cout << "NO"; return 0;}
    for (int i=s; i<n; i++) {
        if (a[i]==b[i] && a[i]==1) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}