//https://codeforces.com/contest/1108/problem/C

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
char a[200005];
int r[3], b[3], g[3];
 
int main() {
    int n;
    cin >> n;
    scanf("%s", a);
    for (int i=0; i<n; i++) {
        if (a[i]=='R') {
            r[i%3]++;
        }
        else if (a[i] == 'B') {
            b[i%3]++;
        }
        else {
            g[i%3]++;
        }
    }
    ll sums[6];
    sums[0] = r[1]+r[2]+b[0]+b[2]+g[0]+g[1];
    sums[1] = r[1]+r[2]+b[0]+b[1]+g[0]+g[2];
    sums[2] = r[0]+r[2]+b[1]+b[2]+g[0]+g[1];
    sums[3] = r[0]+r[2]+b[0]+b[1]+g[1]+g[2];
    sums[4] = r[0]+r[1]+b[1]+b[2]+g[0]+g[2];
    sums[5] = r[0]+r[1]+b[0]+b[2]+g[1]+g[2];
    int r=0;
    for (int i=1; i<6; i++) {
        if (sums[r] > sums[i]) {
            r = i;
        }
    }
    cout << sums[r] << endl;
    if (r == 0)  { 
        string a = "RBG";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    else if (r == 1)  { 
        string a = "RGB";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    else if (r == 2)  { 
        string a = "BRG";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    else if (r == 3)  { 
        string a = "GRB";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    else if (r == 4)  { 
        string a = "BGR";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    else  { 
        string a = "GBR";
        for (int i=0; i<n; i++) {
            cout << a[i%3];
        }
    }
    cout << endl;
}