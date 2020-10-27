//https://codeforces.com/contest/1066/problem/B

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int n,r,array[1003];
    scanf("%i%i", &n, &r);
    for(int i=0; i<n; i++) {
        scanf("%i", &array[i]);
    }
    int num=0;
    char ok = 'B';
    for (int i=0; i<n;) {
        ok = 'B';
        int variable = fmin(i+r-1,n);
        for (;variable >=i-r+1 && variable >= 0; variable--) {
            if (array[variable] == 1) {
                i = variable + r;
                num++;
                ok = 'A';
                break;
            }
        }
        if (ok == 'B') {printf("-1"); break;}
    }
    if (ok == 'A') printf("%i", num);
    return 0;
}