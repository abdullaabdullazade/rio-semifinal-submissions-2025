#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define pairll pair<ll, ll>
#define mk make_pair 
#define pb push_back
#define ss second
#define ff first
#define hurry_up ios_base::sync_with_stdio(0); \
    cout.tie(0); \
    cin.tie(0); \

void solve(){
	ll n, x, ans=1;
	map<ll, pairll>m;
	vector<ll>v;
	vector<ll>f;
	cin>>n;
	while(n--){
		cin>>x;
		v.pb(x);
		f.pb(x);
	}
	sort(v.begin(), v.end());
	for (ll i=0;i<v.size();i++){
		if (i==0){
			m[v[0]]={0, v[1]};
		}
		if (i==v.size()-1){
			m[v[v.size()-1]]={v[v.size()-2], 0};
		}
		m[v[i]]={v[i-1], v[i+1]};
	}	
	for (ll i=1;i<f.size();i++){
		if (f[i-1]!=m[f[i]].ss and f[i-1]!=m[f[i]].ff){
			ans++;
		}
	}
	cout<<ans<<endl;
} 


int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();
	}
}
