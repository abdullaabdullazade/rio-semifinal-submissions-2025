#include <bits/stdc++.h>
#define GOOD_LUCK ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define pb push_back
#define int long long
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
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
	int n, m;
	cin >> n >> m;
	vector <vector <int>> v(n, vector <int>(m));
	vector <int> s(n, 0);
	for (int i=0; i < n; i++) {
		string a;
		cin >> a;
		for (int j=0; j < m; j++) {
			v[i][j] = ctoi(a[j]);
			s[i] += v[i][j];
		}
	}
	vector <int> s1(m, 0);
	for (int i=0; i < m; i++) {
		for (int j=0; j < n; j++) {
			s1[i] += v[j][i];
		}
	}
	int cnt=0;
	for (int i=0; i < n; i++) {
		if (s[i] == 1) {
			int id=0;
			while (v[i][id] != 1) id++;
			if (s1[id] == 1) {
				cnt++;
			}
		}
		else if (s[i] == m) {
			for (int j=0; j < m; j++) {
				if (s1[j] == n) cnt++;
			}
		}
		if (s[i] == m - 1) {
			int id=0;
			while (v[i][id] != 0) id++;
			if (s1[id] == n-1) {
				cnt++;
			}
		}
		if (s[i] == 0) {
			for (int j=0; j < m; j++) {
				if (s1[j] == 0) cnt++;
			}
		}
		
	}
	cout << cnt;
}

signed main() {
	
	GOOD_LUCK
	
	int tests = 1;
//	cin >> tests;
	while (tests--) {
		_();
//		cout << endl;
	}
	
	return 0;
}
