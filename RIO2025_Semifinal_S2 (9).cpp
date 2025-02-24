#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(n);
		for(ll i=0; i<n; i++){
			cin>>v[i];
		}
		vector<ll>v1=v;
		sort(v1.begin(),v1.end());
		ll say=0;
		while(true){
			
			for(ll i=1; i<v.size(); i++){
				if(v[i]<v[i-1]){
					swap(v[i],v[i-1]);
					say++;
					i--;
				}
			}
				if(v==v1){
			        break;
		         }
		}
		cout<<say<<endl;
	
		}
	}
	

