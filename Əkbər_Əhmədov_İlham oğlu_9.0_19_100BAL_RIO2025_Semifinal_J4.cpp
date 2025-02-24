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

int merge(vector <int>& v, int l, int r) {
	int mid = (l + r) / 2;
	int szr = r - mid;
	int szl = mid - l + 1;
	vector <int> L(szl), R(szr);
	for (int i=l; i <= mid; ++i) {
		L[i - l] = v[i];
	}
	for (int i=mid + 1; i <= r; ++i) {
		R[i - (mid + 1)] = v[i];
	}
	int inv = 0;
	int i = 0, j = 0;
	for (int k = l; k <= r; ++k) {
		if (j == szr) {
			v[k] = L[i++];
		}
		else if (i == szl) {
			v[k] = R[j++];
		}
		else if (L[i] <= R[j]) {
			v[k] = L[i++];
		}
		else {
			inv += szl - i;
			v[k] = R[j++];
		}
	}
	return inv;
}

int mergesort(vector <int> &v, int l, int r) {
	if (l < r) {
		int mid = (l + r) / 2;
		int invl = mergesort(v, l, mid);
		int invr = mergesort(v, mid + 1, r);
		return invl + invr + merge(v, l, r);
	}
	else return 0;
}

void _() {
	int n;
	cin >> n;
	vector <int> v(n);
	for (int &i : v) cin >> i;
	int inv = mergesort(v, 0, n-1);
	for (int i=0; i < n-1; i++) {
		if (v[i] == v[i+1]) {
			cout << "Yes";
			return;
		}
	}
	if (inv % 2 == 0) cout << "Yes";
	else cout << "No";
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
