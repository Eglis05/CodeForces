//https://codeforces.com/contest/1066/problem/C

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arrayL[200005], arrayR[200005];
int minimum(int a,int b) {
    if (a >= b) {
        return b;
    }
    else {
        return a;
    }
}
int main() {
    int nrL=0, nrR=0,q;
    scanf("%i", &q);
    for (int i=0; i<q; i++) {
        char ch;
        int number;
        scanf(" %c%i", &ch, &number);
        if (ch == 'L') {
            nrL++;
            arrayL[number] = nrL;
        }
        else if (ch == 'R') {
            nrR++;
            arrayR[number] = nrR;
        }
        else {
            if (arrayL[number] != 0) {
                printf("%i\n", minimum(nrL-arrayL[number],nrR+arrayL[number]-1));
            }
            else {
                printf("%i\n", minimum(nrR-arrayR[number],nrL+arrayR[number]-1));
            }
        }
    }
    return 0;
}