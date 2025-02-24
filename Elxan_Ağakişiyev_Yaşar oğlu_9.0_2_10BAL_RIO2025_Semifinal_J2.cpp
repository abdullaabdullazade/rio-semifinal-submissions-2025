#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
void solve(){
   int n; cin >> n;
   vector<int> a(n), b(n) , v(n,0);
   for(int i=0;i<n;i++) cin >> a[i];
   for(int i=0;i<n;i++) cin >> b[i];
   sort(a.begin(), a.end()); sort(b.begin(),b.end());
   for(int i=0;i<n;i++){
       if(a[i] < b[i]){
        cout << 0 << '\n'; return;
       }
   }
    for(int i=0;i<n;i++){
            int c=0;
        for(int j=0;j<n;j++){
            if(a[i]>= b[j]) c++;
        }
        v[i]=c; c=0;
    }
    int d=1;
    for(int i=0;i<n; i++){
        d*=(v[i]-i); d%=mod;
    } cout << d << '\n';
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin >> t;
    while(t--) solve(); return 0;
}
