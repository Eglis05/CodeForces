//https://codeforces.com/contest/1043/problem/A

#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n, nums[102],sum =0, maxim=0;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> nums[i];
        sum += nums[i];
        maxim = max(nums[i],maxim);
    }
    float a = (float) (2*sum+1)/n;
    if (a == (2*sum+1)/n) {
        cout << max(maxim,(int)a);
        return 0;
    }
    cout << max(maxim,(2*sum+1)/n + 1);
    return 0;
}