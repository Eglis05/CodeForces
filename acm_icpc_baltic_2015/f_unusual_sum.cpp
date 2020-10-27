//https://codeforces.com/gym/100796/problem/F

#include <iostream>
 
using namespace std;
 
int main()
{
    cout.precision(11);
    int n;
    cin >> n;
    long long li,ri;
    for (int i = 0; i< n; i++)
    {
        cin >> li >> ri;
        ri++;
        long double one =1;
        long double two =1;
        one = one/li;
        two=two/ri;
        cout <<fixed<<one-two<<"\n";
    }
    return 0;
}