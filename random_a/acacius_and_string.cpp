//https://codeforces.com/contest/1379/problem/A

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
	string need_compare = "abacaba";
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int j = 0, ok = 0;
		int find_first = s.find(need_compare, 0), find_second = -1;
		if (find_first != -1){
			find_second = s.find(need_compare, find_first + 1);
		}
		if (find_second != -1){
			cout << "NO" << endl;
			continue;
		}
		if (find_first != -1){
			j = 7;
			ok = 1;
			find_first = n;
		}
		else{
			find_first = n - 7;
		}
		for (int i = 0; i < n + 1; i++){
			if (j == 7){
				if (ok == 0) {
					if (n > i+3 && s[i] == 'c' && s[i+1] == 'a' && s[i+2] == 'b' && s[i+3] == 'a'){
						i -= 7;
						j = 0;
					}
					else if (i > 10 && s[i-8] == 'c' && s[i-9] == 'a' && s[i-10] == 'b' && s[i-11] == 'a'){
						i -= 7;
						j = 0;
					}
					else{
						find_first = i - 7;
						ok = 1;
					}
				}
				if (s[i] == '?'){
					s[i] = 'd';
				}
			}
			else if (i < n && (s[i] == need_compare[j] || s[i] == '?')){
				j++;
			}
			else if (i < n){
				i -= j;
				j = 0;
			}
		}
		if (j == 7){
			cout << "YES" << endl;
			for (int i = 0; i < find_first; i++){
				if (s[i] == '?'){
					s[i] = 'd';
				}
			}
			if (find_first != n){
				for (int j = 0; j < 7; j++){
					if (s[j+find_first] == '?'){
						s[j+find_first] = need_compare[j];
					}
				}
			}
			cout << s << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}