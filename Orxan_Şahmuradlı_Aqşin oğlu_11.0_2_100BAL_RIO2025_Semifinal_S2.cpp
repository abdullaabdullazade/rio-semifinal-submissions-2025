#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long double ld;
ll check[1000000];
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t,n;
	cin>>t;
	while (t--) {
		map <ll,ll> mp;
		cin>>n;
		ll ans=1;
		vector <ll> v(n), a, b;
		set <ll> s;
		for (int i=0; i<n; i++) {
			cin>>v[i];
			b.push_back(v[i]);
		}
		sort (b.begin(), b.end());
		a=b;
		reverse (a.begin(), a.end());
		vector <ll> x;
		x.push_back(v[0]);
		for (int i=0; i<n; i++) {
			mp[b[i]]=i;
			check[i]=b[i];
		}
		bool ta=1, tb=1;
		for (int i=1; i<n; i++) {
			ll ind=mp[v[i]], z=x[x.size()-1];
			if (tb && z==check[ind-1]) {
				x.push_back(v[i]);
				ta=0;
			}
			else if (ta && z==check[ind+1]) {
				x.push_back(v[i]);
				tb=0;
			}
			else {
				ans++;
				x.clear();
				x.push_back(v[i]);
				ta=1;
				tb=1;
			}
		}
		cout<<ans<<endl;
	}
	
}
