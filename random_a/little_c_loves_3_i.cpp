//https://codeforces.com/contest/1047/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    if (n%3 == 0 || n%3 ==1){
        cout << n-2 <<"\n" <<"1" <<"\n"<<"1";
    }
    else{
        cout << n-3 <<"\n" <<"2" <<"\n"<<"1";
    }
    return 0;
}