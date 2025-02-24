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

void compress(int n, vector <int> &v) {
	vector <pair<int, int>> x(n);
	for (int i=0; i < n; i++) {
		x[i] = {v[i], i};
	}
	sort(all(x));
	int nxt=1;
	for (int i=0; i < n-1; i++) {
		if (x[i].ff == x[i+1].ff) {
			x[i].ff = nxt;
		}
		else x[i].ff = nxt++;
	}
	x[x.size()-1].ff = nxt;
	for (int i=0; i < n; i++) {
		swap(x[i].ff, x[i].ss);
	}
	sort(all(x));
	for (int i=0; i < n; i++) {
		v[i] = x[i].ss;
	}
}

constexpr int MAX = 1e+5 + 3, INF = 2e+9, MOD = 1e+9 + 7, K = 18;

int temp, temp1, temp2, temp3;

bool pnd(string a) {
	string b = a;
	reverse(all(b));
	return a== b;
}

void _() {
	int l, r;
	cin >> l >> r;
	for (int i=l; i <= r; i++) {
		string a = to_string(i);
		if (pnd(a)) cout << "Palindrome!\n";
		else cout << i << endl;
	}
}

signed main() {

	GOOD_LUCK

//	freopen("input.in", "r", stdin);
//	freopen("output.out", "w", stdout);
	srand(time(0));

	int tests=1;
//	cin >> tests;
	while (tests--) {
		_();
//    	cout << endl;
	}

	return 0;
}
// Problem X
// by Ekber_Ekber
/*


*/
