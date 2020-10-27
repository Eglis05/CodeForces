//https://codeforces.com/contest/1051/problem/C

#include <bits/stdc++.h>
using namespace std;
int a[102], b[102];
int main() {
    int n,ones=0,twos=0,others=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> b[i];
        a[b[i]]++;
    }
    for (int i=1; i<101; i++) {
        if (a[i] == 1) {
            ones++;
        }
        else if (a[i] == 2) {
            twos++;
        }
        else if (a[i] > 2) {
            others++;
        }
    }
    if (ones % 2 == 0) {
        cout << "YES" << endl;
        bool ok = true;
        for (int i=0; i<n; i++) {
            if (a[b[i]] == 1 && ok) {
                cout << "B";
                ok = false;
            }
            else if (a[b[i]] == 1) {
                cout << "A";
                ok = true;
            }
            else {
                cout << "B";
            }
        }
    }
    else if (others >= 1) {
        cout << "YES" << endl;
        bool ok = true, okk = true;
        for (int i=0; i<n; i++) {
            if (a[b[i]] == 1 && ok) {
                cout << "B";
                ok = false;
            }
            else if (a[b[i]] == 1) {
                cout << "A";
                ok = true;
            }
            else if (a[b[i]] > 2 && okk) {
                cout << "A";
                okk = false;
            }
            else {
                cout << "B";
            }
        }
    }
    else {
        cout << "NO";
    }
}