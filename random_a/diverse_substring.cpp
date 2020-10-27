//https://codeforces.com/contest/1073/problem/A

#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >>n;
    string a;
    cin >>a;
    if (n==1) {cout << "NO"; return 0;}
    for (int i=1; i<n; i++) {
        if (a[i] != a[i-1]) {
            cout << "YES" <<endl<<a[i-1]<<a[i];
            return 0;
        }
    }
    cout <<"NO";
    return 0;
}