#include <bits/stdc++.h>
using namespace std;

#define int long long

const int N = 1550;
const int mod= 1e9+7;
int a[N][N];
char b[N][N];
int c[N],r[N];

void solve(){
	int n,m; cin >> n>>m;
	for(int i=1; i<=n;i++) {
		for(int j =1;j<=m;j++){
			cin >> b[i][j];
			a[i][j]= b[i][j]-'0';
		}
	}
	for(int i=1; i<=n;i++) {
		for(int j =1;j<=m;j++){
			r[i]+=a[i][j];
		}
	}
	for(int j =1;j<=m;j++){
		for(int i=1; i<=n;i++) {
			c[j]+=a[i][j];
		}
	}
	int ans = 0;
	
	for(int i=1; i<=n;i++) {
		for(int j =1;j<=m;j++){
			if(a[i][j] ==1){
				if((r[i] == 1 and c[j]==1) or (r[i]==m and c[j] == n))  ans++;
			}else{
				if((r[i] == 0 and c[j]==0) or (r[i]==m-1 and c[j] == n-1))  ans++;
			}
		}
	}
	cout << ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--)solve();
}
