//https://codeforces.com/contest/1066/problem/A

#include <stdio.h>
#include <stdlib.h>
 
int main() {
   int t;
   scanf("%i", &t);
   for (int i=0; i<t; i++) {
        int Li,vi,li,ri;
        scanf("%i%i%i%i",&Li,&vi,&li,&ri);
        int first=(li-1)/vi;
        int second=Li/vi;
        int third=ri/vi;
        printf("%i\n", first+second-third);
   }
   return 0;
}