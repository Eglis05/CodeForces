//https://codeforces.com/contest/1029/problem/B

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int n,*p;
    cin >>n;
    p = new int[n];
    for (int i=0;i<n;i++) {
        cin >>p[i];
    }
    int contest = 1,counting= 1;
    for (int i=1;i<n;) {
        if (p[i]<= 2 * p[i-1]) {
            counting++;
            i++;
        }
        else {
            contest = max(contest,counting);
            counting =1;
            i++;
        }
    }
    cout <<max(contest,counting);
}