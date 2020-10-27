//https://codeforces.com/contest/1391/problem/D

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
	int n, m;
	cin >> n >> m;
	if (n > 3){
		cout << -1 << endl;
	}
	else if (n == 1){
		cout << 0 << endl;
	}
	else if (n == 2){
		int a[m], b[m];
		for (int i = 0; i < m; i++){
			char x;
			cin >> x;
			a[i] = 0;
			if (x == '1'){
				a[i] = 1;
			}
		}
		for (int i = 0; i < m; i++){
			char x;
			cin >> x;
			b[i] = 0;
			if (x == '1'){
				b[i] = 1;
			}
		}
		int first = 0, second = 0;
		for (int i = 1; i < m; i++){
			int count = 0;
			if (a[i-1] == 1)	count++;
			if (a[i]   == 1)	count++;
			if (b[i-1] == 1)	count++;
			if (b[i]   == 1)	count++;
			int first_2, second_2;
			if (count % 2 == 0){
				first_2 = second + 1;
				second_2 = first;
			}
			else{
				first_2 = first; //meaning that it doesnt change
				second_2 = second + 1;
			}
			first = first_2;
			second = second_2;
		}
		cout << min(first, second+1) << endl;
	}
	else{
		int a[3][m];
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < m; j++){
				char x;
				cin >> x;
				a[i][j] = 0;
				if (x == '1'){
					a[i][j] = 1;
				}
			}
		}
		int no_change = 0, first = 1, second = 1, third = 1, first_second = 2, first_third = 2, second_third = 2, all_change = 3;
		for (int i = 1; i < m; i++) {
			int count_upper = 0, count_lower = 0;
			if (a[0][i-1] == 1)	count_upper++;
			if (a[0][i]   == 1)	count_upper++;
			if (a[1][i-1] == 1)	{count_upper++; count_lower++;}
			if (a[1][i]   == 1)	{count_upper++; count_lower++;}
			if (a[2][i-1] == 1)	count_lower++;
			if (a[2][i]   == 1)	count_lower++;
			int  no_change_2, first_2, second_2, third_2, first_second_2, first_third_2, second_third_2, all_change_2;
			if (count_lower % 2 == 1 && count_upper % 2 == 1){
				no_change_2 = min(no_change, all_change);
				first_2 = min(first, second_third) + 1;
				second_2 = min(first_third, second) + 1;
				third_2 = min(third, first_second) + 1;
				first_second_2 = min(third, first_second) + 2;
				first_third_2 = min(second, first_third) + 2;
				second_third_2 = min(first, second_third) + 2;
				all_change_2 = min(no_change, all_change) + 3;
			}
			else if (count_lower % 2 == 1){
				no_change_2 = min(first, second_third);
				first_2 = min(no_change, all_change) + 1;
				second_2 = min(third, first_second) + 1;
				third_2 = min(second, first_third) + 1;
				first_second_2 = min(second, first_third) + 2;
				first_third_2 = min(third, first_second) + 2;
				second_third_2 = min(no_change, all_change) + 2;
				all_change_2 = min(first, second_third) + 3;
			}
			else if (count_upper % 2 == 1){
				no_change_2 = min(third, first_second);
				first_2 = min(second, first_third) + 1;
				second_2 = min(first, second_third) + 1;
				third_2 = min(no_change, all_change) + 1;
				first_second_2 = min(no_change, all_change) + 2;
				first_third_2 = min(first, second_third) + 2;
				second_third_2 = min(second, first_third) + 2;
				all_change_2 = min(third, first_second) + 3;
			}
			else {
				no_change_2 = min(second, first_third);
				first_2 = min(third, first_second) + 1;
				second_2 = min(no_change, all_change) + 1;
				third_2 = min(first, second_third) + 1;
				first_second_2 = min(first, second_third) + 2;
				first_third_2 = min(no_change, all_change) + 2;
				second_third_2 = min(third, first_second) + 2;
				all_change_2 = min(second, first_third) + 3;
			}
			no_change = no_change_2;
			first = first_2;
			second = second_2;
			third = third_2;
			first_second = first_second_2;
			first_third = first_third_2;
			second_third = second_third_2;
			all_change = all_change_2;
		}
		cout << min(min(min(min(no_change, first), min(second, third)), min(first_second, first_third)), min(second_third, all_change)) << endl;
	}
}