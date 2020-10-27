//https://codeforces.com/contest/1063/problem/A

#include <bits/stdc++.h>
using namespace std;
int a[36];
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i=0; i<n; i++) {
        a[(int)s[i]-97]++;
    }
    for (int i=0; i<36;) {
        if (a[i]>0) {
            printf("%c", i+97);
            a[i]--;
        }
        else {
            i++;
        }
    }
    return 0;
}