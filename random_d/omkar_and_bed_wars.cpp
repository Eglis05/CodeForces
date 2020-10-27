//https://codeforces.com/contest/1392/problem/D

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
		string a;
		int steps = 0;
		cin >> a;
		string b = "ABCD";
		a = a + b;
		char symbol = a[0];
		int i = 1, count = 1;
		for (; i < n; i++){
			if (symbol == a[i]){
				count ++;
			}
			else{
				break;
			}
		}
		if (i == n){
			cout << (count+2)/3 << endl;
			continue;
		}
		// cout << count << endl;
		for (int j = n-1; j >= i; j--){
			if (symbol == a[j]){
				count ++;
			}
			else{
				a[j+1] = 'E';
				steps += int(count/3);
				break;
			}
		}
		// cout << a << endl;
		// cout << count << endl;
		symbol = a[i];
		i++;
		for (; i < n && symbol != 'E'; i++){
			if(symbol == a[i] && symbol == a[i+1]){
				steps++;
				if (symbol == a[i+2] && symbol == a[i+3]){
					symbol = a[i+2];
					a[i+1] = 'F';
					i += 2; 
				}
				else{
					symbol = a[i+1];
					a[i] = 'F';
					i += 1;
				}
			}
			else{
				symbol = a[i];
			}
		}
		// cout << a << endl;
		cout << steps << endl;
	}
	// int n;
	// cin >> n;
	// for(int i = 0; i < n; i++){
 
	// }
}