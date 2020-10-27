//https://codeforces.com/contest/1054/problem/C

#include <iostream>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *l,*r,*ans,number=0;
    l = new int[n];
    r = new int[n];
    ans = new int[n];
    for (int i=0; i<n; i++) {cin>>l[i]; ans[i]=0;}
    for (int i=0; i<n; i++) {cin>>r[i];}
    for (int i=n;i>0; i--) {
        char ok = 'F';
        for (int j=0; j<n; j++) {
            if (ans[j]<i && l[j]==r[j] && l[j]==0) {
                ok = 'T';
                ans[j] = i;
                number++;
            }
        }
        if (number==n) {break;}
        if (ok=='F') {cout <<"NO"; return 0;}
        for (int j=0; j<n; j++) {
            if (ans[j]==i) {
                for (int k=0; k<j;k++) {
                    r[k]--;
                    if (r[k]<0 && ans[k]<i) {cout<<"NO"; return 0;}
                }
                for (int k=j+1;k<n;k++) {
                    l[k]--;
                    if (l[k]<0 && ans[k]<i) {cout<<"NO"; return 0;}
                }
            }
        }
    }
    cout<<"YES\n";
    for (int i=0; i<n;i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}