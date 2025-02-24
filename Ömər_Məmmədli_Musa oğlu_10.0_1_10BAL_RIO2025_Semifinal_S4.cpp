#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
    
    ll n,k;
    cin>>n>>k;
    if(n==2){
        vector<ll>v(k),v1(k);
        for(ll i=0; i<k; i++){
        	cin>>v[i];
		}
		for(ll i=0; i<k; i++){
        	cin>>v1[i];
		}
		ll mn=INT_MAX;
		sort(v.begin(),v.end());
		sort(v1.begin(),v1.end());
		
		for(ll i=0;  i<k; i++){
			
			for(ll j=0; j<k; j++){
				
				ll a=abs(v[i]-v1[j]);
				if(a<mn){
					mn=a;
				
				}
			}
		}
		cout<<mn;
	}
}
