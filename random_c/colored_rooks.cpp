//https://codeforces.com/contest/1068/problem/C

#include <iostream>
 
using namespace std;
int numbers[103][1004],counting[103];
int main()
{
    int n,m;
    cin >>n >>m;
    for (int i=0; i<m;i++) {
        int a,b;
        cin >>a>>b;
        counting[a]++;
        counting[b]++;
        numbers[a][counting[a]] = i+n+1;
        numbers[b][counting[b]] = i+n+1;
    }
    for (int i=1;i<=n;i++) {
        if (counting[i]==0) {
            cout<<"1\n"<<i<<" "<<i<<"\n";
        }
        else {
            cout<<counting[i]+1<<"\n"<<i<<" "<<i<<"\n";
            for (int j=1; j<=counting[i];j++) {
                cout<<i<<" "<<numbers[i][j]<<"\n";
            }
        }
    }
}