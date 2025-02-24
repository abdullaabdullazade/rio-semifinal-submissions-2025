#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
using str = string;

#define pb emplace_back

bool IsPalindrome(str s) {
	ll i = 0, j = s.size() - 1;
	while (i <= j) {
		if (s[i] != s[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

bool IsPrime(ll n) {
	if (n < 2) {
		return false;
	} 
	
	for (ll i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

vector<bool> Primes(ll n) {
	vector<bool> primes(n, true);
	primes[0] = primes[1] = false;
	for (ll i = 2; i <= sqrt(n); ++i) {
		if (primes[i]) {
			for (ll j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}
 
void solveTraffic(ll x, ll n, ll* P) {
	set<pair<ll, ll>> st;
	multiset<ll> mst;
	
	st.insert({0, x});
	mst.insert(x);
	
	for (ll i = 0; i < n; ++i) {
		ll pos = P[i];
		auto it = st.upper_bound({pos, 0});
		it--;
		
		ll str = it->first;
		ll end = it->second;
		
		st.erase(it);
		mst.erase(mst.find(end - str));
		
		st.insert({str, pos});
		st.insert({pos, end});
		
		mst.insert(pos - str);
		mst.insert(end - pos);
		
		cout << *mst.rbegin() << endl;
		
		
	}
}

void output(vector<ll> v) {
	for (ll x : v) {
		cout << x << ' ';
	}
}

void input(vector<ll>& v) {
	for (ll& x : v) {
		cin >> x;
	}
}



int main(int argc, char* argv[]) {
	ll n, m;
	cin >> n >> m;
	str s;
	vector<vector<ll>> v(n, vector<ll> (m));
	for (ll i = 0; i < n; ++i) {
		cin >> s;
		for (ll j = 0; j < m; ++j) {
			v[i][j] = s[j] - '0';
		}
	}
	if (n == 1 && m == 1) {
		cout << 1 << endl;
		return 0;
	}
	
	
	
	
	ll say = 0;
	for (ll i = 0; i < n; ++i) {
		for (ll j = 0; j < m; ++j) {
			set<ll> st;
			ll t = 0;
			while (t < n) {
				if (t != i) {
					st.insert(v[t][j]);
				}
				if (st.size() == 2) {
					break;
				}
				t++;
			}
			
			t = 0;
			while (t < m) {
				if (t != j) {
					st.insert(v[i][t]);
				}
				if (st.size() == 2) {
					break;
				}
				t++;
			}
			if (st.size() == 1) {
				say++;
			}
		}
	}
	cout << say << endl;
	
}


