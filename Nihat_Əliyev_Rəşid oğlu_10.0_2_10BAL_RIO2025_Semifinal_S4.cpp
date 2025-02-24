#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pr pair
#define pb push_back
#define INF 1e9
#define MAX 1e5
using namespace std;
int main(){
	ll n,i,j,k,m,mx=0,mn=INF,mna=INF,mnc=INF,mxc=0;
	cin>>n>>m;
	ll a[n][m];
	multiset<ll>mp,mc;
	for(i=0 ; i<n ; i++){
            mn=INF; mx=0;
		for(j=0 ; j<m ; j++){
			cin>>a[i][j];
			mp.insert(a[i][j]);
			if(mn>a[i][j]){
				mn=a[i][j];
			}
			if(mx<a[i][j]){
				mx=a[i][j];
			}
		}
		mxc=max(mn,mxc);
		mnc=min(mnc,mx);
	}
	for(i=0 ; i<n ; i++){
		mc=mp;
		for(j=0 ; j<m ; j++){
			auto in=mp.find(a[i][j]);
			mp.erase(in);
		}
		for(j=0 ; j<m ; j++){
			auto it=mp.upper_bound(a[i][j]);
			if(it!=mp.begin()){
                it--;
                ll il=*it;
			mna=min(mna,a[i][j]-il);
			}
		}
		mp=mc;
	}
	cout<<mna;
}
