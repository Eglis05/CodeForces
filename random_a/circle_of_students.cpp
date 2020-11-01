//https://codeforces.com/contest/1203/problem/A

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
#define MMAX 10000int minKey(int key[], bool mstSet[])
#define MIN -1000000000
#define MAX  1000000000
 
 
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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int first = 0;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] == 1){
				first = i;
			}
		}
		if ((first < n-1 && a[first+1] == 2) || (first == n-1 && a[0] == 2)){
			int ok = 0;
			for (int i = first; i < n; i++){
				if (a[i] != i - first + 1){
					cout << "NO" << endl;
					ok = 1;
					break;
				}
			}
			if (ok){
				continue;
			}
			for (int i = 0; i < first; i++) {
				if (a[i] != n + 1 - first + i){
					cout << "NO" << endl;
					ok = 1;
					break;
				}
			}
			if (!ok){
				cout << "YES" << endl;
			}
		}
		else{
			int ok = 0;
			for (int i = first; i >= 0; i--){
				if (a[i] != first - i + 1){
					cout << "NO" << endl;
					ok = 1;
					break;
				}
			}
			if (ok){
				continue;
			}
			for (int i = n-1; i > first; i--) {
				if (a[i] != first + n + 1 - i){
					cout << "NO" << endl;
					ok = 1;
					break;
				}
			}
			if (!ok){
				cout << "YES" << endl;
			}
		}
	}
}