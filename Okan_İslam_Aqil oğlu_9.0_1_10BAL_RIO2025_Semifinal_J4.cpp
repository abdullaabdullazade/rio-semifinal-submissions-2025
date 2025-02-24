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
    ll n; cin >> n;
    if(n == 3){
        ll a, b, c;
        cin >> a >> b >> c;
        if(a <= b and b <= c){cout << "Yes" << endl; return ;}
        for(ll i = 0; i < 3; i++){
            ll k = c;
            c = b, b = a, a = k;
            if(a <= b and b <= c){cout << "Yes" << endl; return ;}
        }
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

}

int main(){
    speed
    ll t; cin >> t;
    while(t--) solve();
}
