//https://codeforces.com/contest/1076/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    int breaking=n-1;
    for (int i=0; i<n-1;i++) {
        if (s[i] > s[i+1]) {
            breaking = i;
            break;
        }
    }
    for (int i=0; i<breaking; i++) {
        cout << s[i];
    }
    for (int i=breaking+1; i<n;i++) {
        cout << s[i];
    }
}