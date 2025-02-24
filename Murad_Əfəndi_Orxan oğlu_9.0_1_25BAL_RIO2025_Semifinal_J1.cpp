//Author : MuRadical
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define iwillwinsemifinal ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bg begin()
#define ed end()
#define pb push_back
#define all(v) v.bg,v.ed
#define lb lower_bound
#define ub upper_bound
#define vi vector<int>
#define allr(v) v.rbegin(), v.rend()
#define int ll

const int INF = 1e10 + 5, sz = 1e9 + 5, mod = 1e9 + 7;

int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[] = {2, 1, -1, -2, 2, 1, -1, -2};

void solve(){
    string s; cin >> s;
    int n, m, k; cin >> n;
    m = ((s[0] - '0') * 10) + s[1] - '0';
    k = ((s[3] - '0') * 10) + s[4] - '0';
    k += n;
    m += k / 60;
    k %= 60;
    m %= 24;
    if (m / 10) cout << m;
    else cout << '0' << m;
    if (k / 10) cout << ':' << k;
    else cout << ":0" << k;
    cout << '\n';
}   
    
signed main(){
    iwillwinsemifinal
    int t = 1; cin >> t;
    while(t--) solve();
}   