//https://codeforces.com/contest/1102/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 4 == 3) {
        cout << "0";
    }
    else {
        cout << "1";
    }
}