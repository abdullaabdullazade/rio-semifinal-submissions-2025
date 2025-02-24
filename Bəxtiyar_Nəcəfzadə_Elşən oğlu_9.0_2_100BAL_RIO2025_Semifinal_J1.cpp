#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 3e5+5;
int a[N];

void solve(){
	string s; cin>>s;
	int x; cin >> x;
	int h= 0,m = 0;
	bool is= false;
	for(char i:s){
		
		if(i ==':') is=true;
		if(!is){
			
		h *=10;
		h +=i-'0';
		}else{
			if(i!=':') m*=10, m+=i-'0';
		}
	}
	
	m+=h*60;
	m += x;
	h=m/60;
	m %=60;
	h %=24;
	if(h<10) cout<<0;
	cout<< h<<":";
	if(m<10)cout<<0;
	cout<<m<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t--)solve();
}
