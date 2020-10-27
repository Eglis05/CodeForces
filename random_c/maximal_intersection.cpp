//https://codeforces.com/contest/1029/problem/C

#include <iostream>
 
using namespace std;
 
int main()
{
    int n, *l,*r,max1=0,max2=0,min1=1000000000,min2=1000000000,a=0,c=0,d=0;
    cin >>n;
    l= new int[n];
    r= new int[n];
    for (int i=0; i<n;i++) {
        cin >>l[i] >>r[i];
        if (max1<=l[i]) {
            c = i;
            max2=max1;
            max1=l[i];
        }
        else if (max2<l[i]) {
            max2=l[i];
        }
        if (min1>=r[i]) {
            d = i;
            min2=min1;
            min1=r[i];
        }
        else if (min2>r[i]) {
            min2=r[i];
        }
    }
    for (int i=0;i<n;i++) {
        if (i==c) {
            if (i==d) {
                a = max(a,-max2+min2);
            }
            else {
                a = max(a,-max2+min1);
            }
        }
        else {
            if (i==d) {
                a = max(a,-max1+min2);
            }
            else {
                a = max(a,-max1+min1);
            }
        }
    }
    cout << a;
}