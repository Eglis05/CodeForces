//https://codeforces.com/contest/1073/problem/B

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, a[200006],c,counting=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
         scanf("%d", &c);
        a[c] = i;
    }
    for (int i=0; i<n; i++) {
         scanf("%d", &c);
        cout << max(0,a[c]-counting)<<" ";
        counting = max(counting,a[c]);
    }
    return 0;
}