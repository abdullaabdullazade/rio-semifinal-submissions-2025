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
	str s;
	ll d;
	ll t;
	cin >> t;
	while (t--) {
		cin >> s >> d;
		ll min = stoll(s.substr(3));
		ll hour = stoll(s.substr(0, 2));
		if (min + d >= 60) {
			hour += (min + d) / 60;
			min  = (min + d) % 60;
		} 
		if (hour >= 24) {
			hour -= 24;
		}
		str h = to_string(hour);
		str m = to_string(min);
		
		if (h.size() == 1) {
			h = '0' + h;
		}
		if(m.size() == 1) {
			m = '0' + m;
		}
		cout << h << ':' << m << endl;
	}
}


