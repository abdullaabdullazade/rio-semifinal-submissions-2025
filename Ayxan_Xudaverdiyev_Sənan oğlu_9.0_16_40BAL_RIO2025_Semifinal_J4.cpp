//Why Am I So Happy?!
#pragma GCC optimize("O3")
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define pb push_back
#define pf push_front
#define speedyboy ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define bpc __builtin_popcount
#define all(x) x.begin() , x.end()
#define allr(x) x.rbegin() , x.rend()
#define F first
#define S second
#define pll pair<ll , ll>
#define pss pair<string , string>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

const ll sz = 1e6 + 5 , INF = 1e18 ,  MOD = 998244353;
ll a[sz] , b[sz];

ll mask , i , j , k;
void solve(){
    ll n;
    cin >> n;
    ll say = 0;
    map<ll , ll> mp;
    for(i = 1 ; i <= n ; i++) cin >> a[i] , b[i] = a[i];
    for(i = 1 ; i <= n ; i++){
        mp[a[i]]++;
        if(mp[a[i]] == 2){
            cout << "Yes" << endl;
            return;
        }
    }
    sort(b + 1 , b + n + 1 , greater<ll>());
    bool ok = true;
    for(i = 1 ; i <= n ; i++) if(b[i] != a[i]) ok = false;
    if(ok){
        if(n % 4 == 0 || n % 4 == 1){
            cout << "Yes" << endl;
            return;
        }
        else{
            cout << "No" << endl;
            return;
        }
    }
    for(i = 1 ; i <= n ; i++){
        for(j = i ; j >= 1 ; j--){
            if(a[i] < a[j]) say++;
        }
    }
    if(say & 1){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}

signed main(){
    speedyboy;
    //open;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}