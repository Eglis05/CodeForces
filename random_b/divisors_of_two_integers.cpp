//https://codeforces.com/contest/1108/problem/B

#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pii = pair<int, int>;
 
#define dbg(x) cerr<<#x": "<<(x)<<'\n'
#define dbg_p(x) cerr<<#x": "<<(x).first<<' '<<(x).second<<'\n'
#define dbg_v(x, n) {cerr<<#x"[]: ";for(long long _=0;_<n;++_)cerr<<(x)[_]<<' ';cerr<<'\n';}
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define pb push_back
#define INF 2000000010
#define MOD 1000000007
#define MOD2 998244353
#define ST_SIZE 1048600
#define QMAX 
#define PI 3.14159265359
#define zeros(x) x^(x-1)&x // x&(-x)
#define NMAX 100005
#define MMAX 100005
 
template<typename T1, typename T2>
ostream& operator <<(ostream &out, const pair<T1, T2> &item) {
	out << '(' << item.first << ", " << item.second << ')';
	return out;
}
 
template<typename T>
ostream& operator <<(ostream &out, const vector<T> &v) {
	for(const auto &item : v) out << item << ' ';
	return out;
}
int a[10004];
int main() {
    int n, g=1;
    cin >> n;
    for (int i=0; i<n; i++) {
        int j;
        cin >> j;
        a[j]++;
        g = max(g,j);
    }
    cout << g;
    for (int i=1; i<=10000; i++) {
        if (a[i] > 0 && g % i == 0) {
            a[i]--;
        }
    }
    int y=1;
    for (int i=1; i<=10000; i++) {
        if (a[i] > 0) {
            y = i;
        }
    }
    cout << " " << y << endl;
}