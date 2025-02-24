#include <bits/stdc++.h>

using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
#define fi(l,r) for(int i = l; i <= r; i++)
void solve(){
	int n; cin >> n;
	int a[n+1],b[n];
	cin >> a[0];
	a[n] = a[0];
	int mx = 0, sm = 0;
	fi(1,n-1){
		cin >> a[i];
		b[i-1] = abs(a[i-1] - a[i]);
		mx = max(mx, b[i-1]);
		sm += b[i-1];
	}
	b[n-1] = abs(a[n-1] - a[n]);
	mx = max(mx, b[n-1]);
	sm += b[n-1];
	if(sm % 2 == 1){
		cout << -1;
		return;
	}
	sm /= 2;
	int sm2 = 0;
	set<int> v;
	fi(0,n-1){
		if(a[i] - a[i+1] >= 0 && b[i] != mx){
			v.insert(i+1);
			sm2 += b[i];
		}
	}
	fi(0,n-1){
		if(sm2 <= sm && sm2 + b[i] <= sm && b[i] == mx){
			v.insert(i+1);
			sm2 += b[i];
		}
		else if(sm2 == sm) break;
	}
	if(v.size() == n && n != 1){
		cout << n - 1 << '\n';
		for(auto it = ++v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	}
	else{
		cout << v.size() << '\n';
		for(auto it = v.begin(); it != v.end(); it++)
		cout << *it << ' ';
	}
}
signed main(){
    int t; cin >> t;
    while(t--){
    	solve();
    	cout << '\n';
	}
}
