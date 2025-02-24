#pragma ("GCC")
#include<bits/stdc++.h>
#define int long long
#define sz size()
#define S second
#define F first
#define pb push_back
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[k],b[k];
    for(int i=0;i<k;i++)cin >> a[i];
    for(int i=0;i<k;i++)cin >> b[i];
    int ans=1e9;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            ans=min(ans,abs(a[i]-b[j]));
        }
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
}
