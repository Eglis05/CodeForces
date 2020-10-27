//https://codeforces.com/contest/1068/problem/B

#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long long int b;
    cin >> b;
    long long int number =1;
    int counting =1;
    while (b%2==0) {
        counting ++;
        b /= 2;
    }
    number *= counting;
    for (long long int i=3; i<=(int) (sqrt(b) + 1); i+=2) {
        counting = 1;
        while (b%i == 0) {
            counting ++;
            b /= i;
        }
        number *= counting;
    }
    if (b==1) {cout << number;}
    else {cout << number*2;}
}