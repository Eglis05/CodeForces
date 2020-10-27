//https://codeforces.com/contest/1047/problem/B

#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        int x,y;
        cin >> x >> y;
        sum = max(sum,x+y);
    }
    cout << sum;
}