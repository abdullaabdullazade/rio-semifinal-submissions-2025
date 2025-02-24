#include <bits/stdc++.h>
#define GOOD_LUCK ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define int long long
#define itn int
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define ins insert
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define count1 __builtin_popcount
#define all(v) v.begin(), v.end()
#define unmap unordered_map
using namespace std;

struct point{
	
};

int ctoi(char x) {
	return (int)x - '0';
}

int sumab(int a, int b) {
	return (a + b) * (b - a + 1) / 2;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

void print(vector <auto> &v) {
	for (const auto &i : v) cout << i << ' ';
}

void print_p(vector <pair<auto, auto>> &v) {
	for (const auto &i : v) cout << i.ff << ' ' << i.ss << endl;
}

int compress(int n, vector <pair<int, int>> &v) {
	vector <pair<int, int>> x;
	for (int i=0; i < n; i++) {
		x.pb({v[i].ff, i});
		x.pb({v[i].ss, i});
	}
	sort(all(x));
	int nxt=0;
	for (int i=0; i < x.size()-1; i++) {
		if (x[i].ff == x[i+1].ff) x[i].ff = nxt;
		else x[i].ff = nxt++;
	}
	x[x.size()-1].ff = nxt;
	for (auto &i : x) {
		swap(i.ff, i.ss);
	}
	sort(all(x));
	for (int i=0; i < x.size(); i += 2) {
		v[i/2].ff = x[i].ss;
		v[i/2].ss = x[i+1].ss;
	}
	return nxt;
}

void timelimit() {
	int x = 1e+8;
	while (x--) x++;
}

constexpr int MAX = 1e+5 + 3, INF = 2e+9, MOD = 1e+9 + 7, K = 18;

int temp, temp1, temp2, temp3;

void build(int n, vector <int> &ids, vector <int> &v) {
	vector <pair<int, int>> q;
	for (int i=0; i < n; i++) {
		q.pb({v[i], i});
	}
	sort(all(q));
	for (int i=0; i < n; i++) {
		ids[q[i].ss] = i;
	}
}

void _() {
	int n;
	cin >> n;
	vector <int> v(n), res;
	for (int &i : v) cin >> i;
	for (int i=0; i < n-1; i++) {
		if (v[i] <= v[i+1]) {
			res.pb(i+1);
		}
	}
	if (v[n-1] < v[0]) res.pb(n);
	cout << res.size() << endl;
	sort(all(res));
	print(res);
}

signed main() {

	GOOD_LUCK

//	freopen("input.in", "r", stdin);
//	freopen("output.out", "w", stdout);
	srand(time(0));

	int tests=1;
	cin >> tests;
	while (tests--) {
		_();
    	cout << endl;
	}

	return 0;
}
// Problem X
// by Ekber_Ekber
/*


*/
