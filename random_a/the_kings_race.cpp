//https://codeforces.com/contest/1075/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    long long int n, x, y;
    cin >> n >> x >> y;
    if (max(y,x) - 1 > n - min(y,x)) {
        cout << "Black";
    }
    else {
        cout << "White";
    }
}