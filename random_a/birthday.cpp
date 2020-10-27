//https://codeforces.com/contest/1068/problem/A

#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    long long int n,m,k,l,a,div;
    cin >>n>>m>>k>>l;
    a = n/m;
    div = (l+k)/m;
    if ((l+k)>(a*m)) { cout<<"-1"; return 0;}
    if ((float) (l+k)/m == div) { cout <<div; return 0;}
    cout << div+1;
}