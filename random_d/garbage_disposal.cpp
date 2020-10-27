//https://codeforces.com/contest/1070/problem/D

#include <iostream>
using namespace std;
 
int main() {
    int n;
    long long int k,a,left=0,times,sum=0;
    cin >> n >> k;
    for (int i=0; i<n-1; i++) {
        cin >> a;
        times = (a+left)/k;
        if (times * k == 0) {
            if (left != 0) {
                sum++;
                left = max((long long int) 0,a+left-k);
            }
            else {
                left = a;
            }
        }
        else {
            sum += times;
            left += a - times * k;
        }
    }
    cin >> a;
    times = (a+left)/k;
    if ((a+left) % k == 0) sum+=times;
    else                   sum+=times+1;
    cout << sum;
    return 0;
}