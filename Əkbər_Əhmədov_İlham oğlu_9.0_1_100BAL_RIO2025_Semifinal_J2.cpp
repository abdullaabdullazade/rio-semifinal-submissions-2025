#include <bits/stdc++.h>
#define GOOD_LUCK ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define int long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define lb lower_bound
#define ub upper_bound
using namespace std;

int ctoi(char x) {
	return (int)x - '0';
}

int sumab(int a, int b) {
	return (a + b) * (b - a + 1) / 2;
}

void print(vector <int> &v) {
	for (const int &i : v) cout << i << ' ';
}

int compress(int n, vector <int> &v) {
	vector <pair<int, int>> x;
	for (int i=0; i < n; i++) {
		x.pb({v[i], i});
	}
	sort(all(x));
	int nxt=1;
	for (int i=0; i < n-1; i++) {
		if (x[i].ff == x[i+1].ff) x[i].ff = nxt;
		else x[i].ff = nxt++;
	}
	x.back().ff = nxt;
	for (int i=0; i < n; i++) {
		swap(x[i].ff, x[i].ss);
	}
	sort(all(x));
	for (int i=0; i < n; i++) {
		v[i] = x[i].ss;
	}
	return nxt;
}

constexpr int MAX = 1e+5 + 3, INF = 2e+9, MOD = 1e+9 + 7, K = 18;

void _() {
	int n;
	cin >> n;
	vector <int> a(n), b(n);
	for (int &i : a) cin >> i;
	for (int &i : b) cin >> i;
	sort(all(a));
	sort(all(b), greater<int>());
	vector <int> c(n, 0);
	for (int i=0; i < n; i++) {
		if (a.empty()) {
			cout << 435934;
			return;
		}
		int id = lb(all(a), b[i]) - a.begin();
		if (id == a.size()) {
			cout << 0;
			return;
		}
		c[i] = a.size() - id;
		a.pop_back();
	}
	int h = 1;
	for (int &i : c) {
		h *= i;
		h %= MOD;
	}
	cout << h;
}

signed main() {
	
	GOOD_LUCK
	
	int tests = 1;
	cin >> tests;
	while (tests--) {
		_();
		cout << endl;
	}
	
	return 0;
}
