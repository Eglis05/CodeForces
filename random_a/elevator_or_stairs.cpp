//https://codeforces.com/contest/1054/problem/A

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
 
int main()
{
    int x,y,z,t1,t2,t3;
    cin >>x>>y>>z>>t1>>t2>>t3;
    if (((abs(z-x)+abs(x-y))*t2 + 3 * t3)<=(abs(x-y)*t1)  ) { cout <<"YES";}
    else {cout << "NO";}
}