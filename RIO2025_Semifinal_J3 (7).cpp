#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define speedyboy ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define endl '\n'
#define all(x) x.begin() , x.end()
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl

using namespace std;

ll gcd(ll a , ll b){
    if(b == 0) return a;
    return gcd(b , a % b);
}

ll lcm(ll a , ll b){
    return a * b / gcd(a , b);
}

bool isprime(ll n){
    if(n == 1) return false;
    if(n == 2 || n == 3 || n == 5 || n == 7) return true;
    if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) return false;
    for(ll i = 11 , t = 2; i * i <= n ; i += t , t = 6 - t){
        if(n % i == 0) return false;
    }
    return true;
}

ll findsum(ll n){
    ll ans = 0;
    while(n){
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

vector<ll> factor(ll n){
    vector<ll> v;
    for(ll i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            v.pb(i);
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n != 1) v.pb(n);
    return v;
}

ll binpow(ll a , ll b , ll c){
    a %= c;
    ll ans = 1;
    while(b){
        if(b & 1) ans = ans * a % c;
        a = a * a % c;
        b >>= 1;
    }
    return ans;
}

const ll sz = 3e3 + 5 , INF = 1e18 , MOD = 1e9 + 7;
ll a[sz][sz];

ll mask , i , j , k;
void solve(){
    ll n , m;
    cin >> n >> m;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= m ; j++){
            char c;
            cin >> c;
            a[i][j] = c - '0';
        }
    }
    ll ans = 0;
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= m ; j++){
            ll x = i , y = j;
            ll sum1 = 0 , sum2 = 0;
            for(k = i - 1 ; k >= 1 ; k--) sum1 += a[k][y];
            for(k = i + 1 ; k <= n ; k++) sum1 += a[k][y];
            for(k = j + 1 ; k <= m ; k++) sum2 += a[x][k];
            for(k = j - 1 ; k >= 1 ; k--) sum2 += a[x][k];
            sum2 += sum1;
            if(sum2 == 0 || sum2 == (n + m - 2)) ans++;
        }
    }
    cout << ans << endl;
}

signed main(){
    speedyboy;
    ll t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}


