//https://codeforces.com/contest/1324/problem/C

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
 
int main() {
    int t;
	cin >> t; 
	while(t--){
		string s;
		cin >> s;
		int maxim = 0, consecutive = 0;
		for (int i = 0; i < (int) s.length(); i++) {
			if (s[i] == 'L'){
				consecutive++;
			}
			else{
				maxim = max(maxim, consecutive);
				consecutive = 0;
			}
		}
		maxim = max(maxim, consecutive);
		cout << maxim + 1 << endl;
	}
    return 0;
}