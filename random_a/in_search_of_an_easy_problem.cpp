//https://codeforces.com/contest/1030/problem/A

#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int *a;
    a = new int[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] == 1){ 
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
    return 0;
}