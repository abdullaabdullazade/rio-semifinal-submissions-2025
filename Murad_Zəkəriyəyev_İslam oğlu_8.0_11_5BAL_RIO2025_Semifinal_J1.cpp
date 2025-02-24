#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m,s=0;
	cin>>n>>m;
	vector<string> v(n);
	vector<ll> row(m);
	vector<ll> sutun(n);
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(v[i][j]=='1'){
				row[j]++;
				sutun[i]++;
			}
	}
}
	for(ll i=0;i<n;i++){
		for(ll j=0;j<m;j++){
			if(v[i][j]=='1' && ((row[j]==n && sutun[i]==m) || (row[j]==1 && sutun[i]==1) )){
				s++;
			}
					
			if(v[i][j]=='0' && ((row[j]==0 && sutun[i]==0) || (row[j]==n-1 && sutun[i]==m-1) )){
				s++;
			}
	}
}
	cout<<s;
}