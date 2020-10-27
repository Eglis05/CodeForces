//https://codeforces.com/contest/1114/problem/B

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
    int n, m, k, a[200005], b[200005], goal, counting = 0;
	long long int beauty;
	cin >> n >> m >> k;
	for (int i=0; i<n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	long long int sum = 0;
	sort(b, b+n);
	for (int i=n-m*k; i < n; i++) {
		sum += b[i];
	}
	goal = b[n-m*k];
	for (int i=n-m*k; i<n; i++) {
		if (goal == b[i])	counting++;
		else				break;
	}
	cout << sum << endl;
	for (int i=0;i < n;) {
		int mm = m;
		for(; mm>0; i++) {
			if (a[i] > goal) {
				mm--;
			}
			else if (a[i]==goal & counting>0) {
				mm--;
				counting--;
			}
		}
		k--;
		if(k>0)	cout << i << " ";
		else	break;
	}
	cout << endl;
}