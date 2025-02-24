/**
   - author : Nora
   - created : 22.2.25 8:20:47 am.
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define bye return 0
#define pb push_back
#define pfr pop_front
#define pbc pop_back
#define pll pair<ll, ll>
#define ff first
#define ss second
#define NO cout<<"NO"
#define YES cout<<"YES"
#define all(v) v.begin(), v.end()

const ll N = 200007;
const ll mod = 1000000007;
const ll MAX=1e18;

void solve(){
    ll n;
    cin>>n;
    vector <ll> v(n);
    for (ll i=0; i<n; i++){
        cin>>v[i];
    }
    bool small=0, large=0;
    ll parts=1;
    for (ll i=0; i<n-1; i++){
        ll temp=v[i];
        if (v[i+1] < temp) small=1;
        else large=1;
        if (small && large){
            small=0;
            large=0;
            parts++;
            continue;
        }
    }
    cout<<parts;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll testcases=1;
    cin>>testcases;
    while (testcases--) {
        solve();
        cout<<endl;
    }
}
