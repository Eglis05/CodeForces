//https://codeforces.com/contest/1055/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    unsigned long long int n,m,l,a[100006], b,c,d, time=0;
    cin >> n >> m >> l;
    for (unsigned long long int i=0; i<n; i++) {
        cin >> a[i];
    }
    if (a[0] > l) time++;
    for (unsigned long long int i=1; i<n; i++) {
        if (a[i] > l && a[i-1] <= l) {
            time++;
        }
    }
    for (unsigned long long int i=0; i<m; i++) {
        cin >> b;
        if (b==0) {
            cout << time << endl;
        }
        else {
            cin >> c >> d;
            if (a[c-1] <= l) {
                a[c-1] += d;
                if (c==1 && a[c-1] > l && a[c] <= l) {
                    time++;
                }
                else if (c > 1 && c < n && a[c-1] > l && a[c-2] <= l && a[c] <=l) {
                    time++;
                }
                else if (c > 1 && c < n && a[c-1] > l && a[c-2] > l && a[c] > l){
                    time--;
                }
                else if (c > 1 && c == n && a[c-1] > l && a[c-2] <= l) {
                    time++;
                }
            }
        }
    }
    return 0;
}