#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define read(a, n) for(ll i = 0; i < n; i++){cin>>a[i];}
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define ar array
#define ss second
#define ff first
#define ins insert
#define pb push_back

const ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin >> n;
    vector<ll>a(n), b(n);
    read(a, n); read(b, n);
    ll j = 0, ans = 1;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    fori(n){
        while(j < n and b[j] <= a[i]){j++;}
        ans *= max(j - i, 0LL);
    }
    cout << ans << endl;
}

int main(){
    speed
    ll t; cin >> t;
    while(t--) solve();
}
