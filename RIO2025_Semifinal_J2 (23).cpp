//#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <deque>
#include <algorithm> 

using namespace std;
using ll = long long;

bool flag(ll a, ll b) {
	return a > b;
}

int main()
{
	ll t;
	cin >> t; 
	for (ll ii = 0; ii < t; ii++) {
		ll n;
		cin >> n; 
		//set<ll> aa, bb;
		ll x; 
		vector<ll> a(n), b(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		for (ll j = 0; j < n; j++)
			cin >> b[j];
		//for (auto el : aa)
		//	a.push_back(el); 
		//for (auto el : bb)
		//	b.push_front(el);
		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), flag);
		ll ans = 1;
		for (ll i = 0; i < n; i++) {
			ll l = -1, r = n; 
			while (r - l > 1) {
				ll m = (r + l) / 2;
				if (a[m] < b[i])
					l = m;
				else
					r = m; 
			}
			if (n - r - i <= 0) {
				ans = 0;
				//cout << endl << n << ' ' << r << ' ' << i << endl << endl;
				break;
			}
			ans *= n - r - i;
		}
		cout << ans << endl;
	}
	//while (true);
	return 0;
}
