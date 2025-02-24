#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 3e5+5;
const int mod= 1e9+7;
int a[N], b[N],c[N], f[N];

void solve(){
	int n; cin >> n;
	for(int i=1; i<=n;i++) cin >> a[i];
	for(int i=1; i<=n;i++) cin >> b[i];
	
	sort(a+1,a+n+1);
	sort(b+1, b+n+1);
	int ans= 1;
	
	for(int i=1; i<=n;i++){
		auto it = upper_bound(b+1, b+n+1, a[i]);
		it--;
		if(it == b){
			cout<<0<< endl;
			return;
		}
		
		
		c[i] =it-b;
		ans *= c[i]-i+1;
		ans%=mod;
	}
	cout << ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    f[0]= 1;
    for(int i=1;i<=3e5;i ++) f[i]= f[i-1]*i%mod;
    int t;cin>>t;
    while(t--)solve();
}
