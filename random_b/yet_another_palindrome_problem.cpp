//https://codeforces.com/contest/1324/problem/B

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


//Solution Nr 1:
int main() {
	int t;
    cin >> t;
	while (t--){
		int n;
		cin >> n;
		int *a = new int[n];
		int *ok = new int[n+1];
		for (int i = 0; i < n+1; i++)
			ok[i] = 0;
 
		int ok2 = 1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (ok[a[i]] && ok[a[i]] != i && ok2){
				cout << "YES" << endl;
				ok2 = 0;
			}
			else if(!ok[a[i]]){
				ok[a[i]] = i+1;
			}
		}
		if (ok2){
			cout << "NO" << endl;
		}
	}
	return 0;
}

//Solution Nr. 2:
// int main() {
//     int t;
// 	cin >> t; 
// 	while(t--){
// 		int n;
// 		cin >> n;
// 		int *a = new int[n];
// 		int ok = 1;
// 		for (int i = 0; i < n; i++) {
// 			cin >> a[i];
// 			for (int j = i - 2; j >= 0; j--) {
// 				if (a[j] == a[i] && ok){
// 					cout << "YES" << endl;
// 					ok  = 0;
// 					break;
// 				}
// 			}
// 		}
// 		if (ok){
// 			cout << "NO" << endl; 
// 		}
// 	}
//     return 0;
// }