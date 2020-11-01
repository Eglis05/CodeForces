//https://codeforces.com/contest/1203/problem/C

//Be sure to run it as: GNU C++17

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
#define MAX  10000000000000
 
 
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
	int n;
	cin >> n;
	long long int a[n];
	long long int minimum = MAX;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		minimum = min(minimum, a[i]);
	}
 
	for(int i = 0; i < n; i++){
		if (a[i] % minimum != 0){
			minimum = gcd(a[i], minimum);
		}
	}
	long long int counting = 0;
    for (long long int i = 1; i <= sqrt(minimum); i++) { 
        if (minimum % i == 0) {
            if (minimum / i == i) 
                counting++; 
  
            else
                counting = counting + 2; 
        }
    }
	cout << counting << endl;
	return 0;
}