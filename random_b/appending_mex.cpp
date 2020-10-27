//https://codeforces.com/contest/1054/problem/B

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int n,bigg=0;
    cin >> n;
    int *a;
    a = new int[n];
    char ok = 'T';
    cin >> a[0];
    if (a[0] != 0) {cout <<'1'; ok='F';}
    for (int i=1; i<n;i++) {
        cin >> a[i];
        if ((a[i]>bigg+1) && ok=='T') {cout <<i+1; ok='F';}
        bigg = max(bigg,a[i]);
    }
    if (ok == 'T') {cout << "-1";}
}