//https://codeforces.com/contest/1088/problem/C

#include <iostream>
 
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[2003];
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        a[i] = k + n + n + 10;
    }
    cout << n+1 << endl;
    cout << "1 " << n << " " << n + n +10 << endl;
    for (int i=0; i<n; i++) {
        cout << "2 " << i+1 << " " << a[i] - i << endl;
    }
}