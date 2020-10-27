//https://codeforces.com/contest/1100/problem/A

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
int main() {
    int n,k,diff=0,*a,pos=0,neg=0;
    cin >> n >> k;
    a = new int[n];
    for (int i=0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            pos++;
        }
        else {
            neg++;
        }
    }
    for (int j=0; j < k; j++) {
        int pos2 = pos, neg2 = neg;
        for (int i=j; i < n; i+=k) {
            if (a[i]==1) {
                pos2--;
            }
            else {
                neg2--;
            }
        }
        diff = max(diff,abs(neg2-pos2));
    }
    cout << diff << endl;
}