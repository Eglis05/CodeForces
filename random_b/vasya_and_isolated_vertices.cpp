//https://codeforces.com/contest/1065/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long int n,m,s=0,k;
    cin >> n >> m;
    k = n;
    if (m!=0)
        for (long long int i=0; i<=k;) {
            i = (s+k)/2;
            if (i==s) {break;}
            if (i * (i-1)/2 < m) {
                s = i;
            }
            else if (i * (i-1)/2 == m) {
                k = i;
                break;
            }
            else {
                k = i;
            }
    }
    else {
        k = 0;
    }
    cout << max((long long int)0,n-2*m) << " " << n-k << endl;
    return 0;
}