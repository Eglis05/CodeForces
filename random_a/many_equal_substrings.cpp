//https://codeforces.com/contest/1029/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n,k;
    cin >> n >>k;
    string a;
    cin >> a;
    int countsame=0;
    int i=1;
    for (;i<n;i++) {
        if (a[0]==a[i]) {
            int j=1;
            for (;i+j<n;j++) {
                if (a[j] != a[i+j]) break;
            }
            if (j==n-i) {countsame=j; break;}
        }
    }
    i=0;
    for (;k>0;k--) {
        for (int j=i;j<n;j++) {
            cout << a[j];
        }
        i = countsame;
    }
    return 0;
}