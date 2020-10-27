//https://codeforces.com/contest/1092/problem/A

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    char c = 'a';
    cin >> t;
    for (; t> 0; t--) {
        int n,k;
        cin >> n >> k;
        for (; n>0;) {
            for (int i=0; i<k && n>0; i++, n--) {
                printf("%c", c+i);
            }
        }
        cout << endl;
    }
    return 0;
}