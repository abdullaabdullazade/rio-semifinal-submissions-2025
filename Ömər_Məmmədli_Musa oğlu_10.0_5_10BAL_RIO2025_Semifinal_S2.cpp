#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		
		vector<pair<ll,ll>>v;
		
		
		for(ll i=0; i<n; i++){
			ll a;
			cin>>a;
			v.push_back({a,i});
		}
		sort(v.begin(),v.end());
		ll say=1;
		for(ll i=1; i<n; i++){
			if(abs(v[i].second-v[i-1].second)!=1){
				say++;
			}
		}
		
		cout<<say<<endl;
	
	}
}

