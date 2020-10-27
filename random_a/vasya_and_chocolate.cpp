//https://codeforces.com/contest/1065/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        unsigned long long int s,a,b,c,sum;
        cin >> s >> a >> b >> c;
        sum = s/(a*c);
        sum *= b;
        sum += s/c;
        cout << sum << endl;
    }
 
}