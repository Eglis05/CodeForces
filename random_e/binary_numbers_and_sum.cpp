//https://codeforces.com/contest/1066/problem/E

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    int n,m,mod = 998244353,sum=0,power=1,sumofa=0;
    string a,b;
    cin >> n >> m;
    cin >> a >>b;
    for (int i=0; i<m; i++) {
        if (i<n && a[n-1-i]=='1') {
            sumofa = (sumofa+power) % mod;
        }
        if (b[m-1-i]=='1') {
            sum = (sum+sumofa) % mod;
        }
        power = (2*power) % mod;
    }
    cout << sum;
    return 0;
}