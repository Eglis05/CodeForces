//https://codeforces.com/contest/1324/problem/D

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
 
//Solution NR 1:
int main() {
	unsigned long long int n;
	cin >> n;
	int *a = new int[n];
	int *b = new int[n];
	int *diff = new int[n];
	vector<int> neg;
	for (int i = 0; i < (int) n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < (int) n; i++){
		cin >> b[i];
		if (a[i] - b[i] <= 0)
			neg.pb(a[i]-b[i]);
		diff[i] = a[i] - b[i];
	}
	sort(diff, diff+n);
	unsigned long long total = 0;
	for (int i = 0; i < (int) neg.size(); i++){
		if (diff[n-1] + neg[i] <= 0)
			continue;
		int start = i;
		for (int end = n-1; start < end - 1;){
			int mid = (end + start)/2;
			if (diff[mid]+neg[i] <= 0){
				start = mid;
			}
			else{
				end = mid;
			}
		}
		start++;
		total += n-start;
	}
	total += (n - neg.size()) * (n-neg.size()-1)/2;
	cout << total << endl;
	return 0;
}

// Solution Nr 2:
// int main() {
//     int n;
// 	cin >> n;
// 	int *a = new int[n];
// 	int *b = new int[n];
// 	int *diff = new int[n];
// 	//vector<int> neg;
// 	for (int i = 0; i < n; i++){
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < n; i++){
// 		cin >> b[i];
// 		// if (a[i] - b[i] <= 0)
// 		// 	neg.pb(a[i]-b[i]);
// 		diff[i] = a[i] - b[i];
// 	}
// 	sort(diff, diff+n);
// 	unsigned long long total = 0;
// 	for (int i = 0; i < n; i++){
// 		if (diff[n-1] + diff[i] <= 0)
// 			continue;
// 		int start = i;
// 		for (int end = n-1; start < end - 1;){
// 			int mid = (end + start)/2;
// 			if (diff[mid]+diff[i] <= 0){
// 				start = mid;
// 			}
// 			else{
// 				end = mid;
// 			}
// 		}
// 		start++;
// 		total += n-start;
// 	}
// 	//total += (n - neg.size()) * (n-neg.size()-1)/2;
// 	cout << total << endl;
// 	return 0;
// }