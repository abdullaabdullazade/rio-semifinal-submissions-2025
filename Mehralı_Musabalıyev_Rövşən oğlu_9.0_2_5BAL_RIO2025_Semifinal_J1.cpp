#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define MAXN 200010

const int INF = 1e18;
const int MOD = 1e9+7;


void solve(){
	string a; cin >> a; int m; cin >> m;
	int f=0, s=0;
	int n = a.size();
	bool flg = 0;
	for(int i = 0; i < n; i++){
		if(a[i]==':')
		{
			flg=1; continue;
		}
		if(flg){
			s=s*10+(a[i]-'0');
		}
		else{
			f=f*10+(a[i]-'0');
		}
	}
	//cout << f << ' ' << s << '\n';
	int total = f*60+s+m;
	
	f = (total/60);
	s= total%60; f%=24;
	if(f%10 == f){
		cout << '0' << f;
	} else cout << f;
	cout << ':';
	if(s%10==s){
		cout << '0' << s;
	} else cout << s;
	cout << '\n';
}


signed main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t = 1; cin >> t;
	while(t--) solve();
	
	return 0;
}

