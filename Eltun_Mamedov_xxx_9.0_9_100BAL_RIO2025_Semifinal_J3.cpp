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
int main()
{
	ll n, m;
	cin >> n >> m;
	vector<vector<bool>> a(n, vector<bool>(m));
	char x;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> x;
			if (x == '1')
				a[i][j] = 1;
			else
				a[i][j] = 0;
		}
	}
	vector<vector<pair<bool, ll>>> str(n, vector<pair<bool, ll>>(m));
	for (ll i = 0; i < n; i++) {
		vector<ll> cnt0, cnt1;
		for (ll j = 0; j < m; j++) {
			if (a[i][j] == 0)
				cnt0.push_back(j);
			else
				cnt1.push_back(j);
		}
		ll zero_cnt = cnt0.size(), one_cnt = cnt1.size();
		if (zero_cnt == m) {
			for (ll j = 0; j < m; j++)
				str[i][j] = { 1, 0 };
		}
		if (one_cnt == m) {
			for (ll j = 0; j < m; j++)
				str[i][j] = { 1, 1 };
		}
		if (zero_cnt == 1 && one_cnt >= 1)
			str[i][cnt0[0]] = { 1, 1 };
		if (zero_cnt >= 1 && one_cnt == 1)
			str[i][cnt1[0]] = { 1, 0 };
		if (zero_cnt == 1 && m == 1)
			str[i][0] = { 1, 2 };
		if (one_cnt == 1 && m == 1)
			str[i][0] = { 1, 2 };
	}
	vector<vector<pair<bool, ll>>> sto(n, vector<pair<bool, ll>>(m));
	for (ll j = 0; j < m; j++) {
		vector<ll> cnt0, cnt1;
		for (ll i = 0; i < n; i++) {
			if (a[i][j] == 0)
				cnt0.push_back(i);
			else
				cnt1.push_back(i);
		}
		ll zero_cnt = cnt0.size(), one_cnt = cnt1.size();
		if (zero_cnt == n) {
			for (ll i = 0; i < n; i++)
				sto[i][j] = { 1, 0 };
		}
		if (one_cnt == n) { 
			for (ll i = 0; i < n; i++) 
				sto[i][j] = { 1, 1 };
		}
		if (zero_cnt == 1 && one_cnt >= 1)
			sto[cnt0[0]][j] = { 1, 1 };
		if (zero_cnt >= 1 && one_cnt == 1)
			sto[cnt1[0]][j] = { 1, 0 };
		if (zero_cnt == 1 && n == 1)
			sto[0][j] = { 1, 2 };
		if (one_cnt == 1 && n == 1)
			sto[0][j] = { 1, 2 };
	}
	ll ans = 0;
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (str[i][j].first == 1 && sto[i][j].first == 1 && (str[i][j].second == 2 || sto[i][j].second == 2 || str[i][j].second == sto[i][j].second))
				ans++;
		}
	}
	cout << ans;
	//while (true); 
	return 0;
}
