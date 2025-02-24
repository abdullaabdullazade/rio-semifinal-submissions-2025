#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
   string s; cin >> s; int n; cin >> n;
   int x=stoi(s.substr(0,2)) , y=n/60, d=n%60;
   x+=y; x%=24;
   int z=stoi(s.substr(3,2)); z+=d; if(z>=60) x++;
   z%=60;  x%=24; if(x/10==0) cout << 0; cout<<x << ":"; if(z/10==0) cout<<0; cout<< z; cout<<'\n';

}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin >> t;
    while(t--) solve(); return 0;
}
