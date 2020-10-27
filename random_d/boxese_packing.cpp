//https://codeforces.com/contest/1066/problem/D

//Solution NR 1:

#include <iostream>
 
using namespace std;
 
int main()
{
    int n,m,k;
    cin >>n>>m>>k;
    int *ptr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> ptr[i];
    }
    int i = n-1;
    for (;m>0;) {
        for (int space=k;i>=0;) {
            space -= ptr[i];
            if (space >=0) {i--;}
            else break;
        }
        m--;
    }
    cout << n-i-1;
}

//Solution NR 2:

// #include <iostream>
 
// using namespace std;
 
// int main()
// {
//     int n,m,k;
//     cin >>n>>m>>k;
//     int *ptr = new int[n];
//     for (int i=0; i<n; i++) {
//         cin >> ptr[i];
//     }
//     int i = n/2,f=n;
//     for (;;) {
//         if (i==f) {break;}
//         int boxes=m;
//         int l = i;
//         for (;boxes>0;boxes--) {
//             for (int space=k;l<n;) {
//             space -= ptr[l];
//             if (space >=0) {l++;}
//             else break;
//             }
//         }
//         if (l==n) {
//             f=i;
//             i=i/2;
//         }
//         else if (i==f-1) {
//             break;
//         }
//         else {
//             i=(i+f)/2;
//         }
//     }
//     cout << n-f;
// }