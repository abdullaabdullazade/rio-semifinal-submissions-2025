/// YA ALLAH!!!

#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
#define pll pair<ll, ll>
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

using namespace std;

bool is_polindrome(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}


void solve(){
    int n; cin >> n;
    vector<int> v(n), sv(n);
    map<int, int> ind;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sv[i] = v[i];
    }
    sort(all(sv));
    for(int i = 0; i < n; i++) {
        ind[sv[i]] = i;
    }
    int res = 1;
    for(int i = 1; i < n; i++) {
        if(abs(ind[v[i]] - ind[v[i-1]]) != 1) {
            res++;
        }
    }
    cout << res << endl;
}


signed main() {
    fastio;
    int t = 1; cin >> t;
    while(t--) solve();
}
