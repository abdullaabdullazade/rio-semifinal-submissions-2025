#include <bits/stdc++.h>

#define ll long long
#define ld long double
#define speedyboy ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define endl '\n'
#define all(x) x.begin() , x.end()

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

const ll sz = 5e6 + 5 , INF = 1e18 , MOD = 1e9 + 7;
ll a[sz];

ll mask , i , j;
void solve(){
    string s;
    ll n;
    cin >> s >> n;
    ll m = stoll(s.substr(3));
    ll ilk = stoll(s.substr(0 , 2));
    if(m + n < 60){
        cout << s.substr(0 , 3);
        if(n + m <= 9){
            cout << 0 << n + m;
        }
        else{
            cout << s.substr(0 , 3) << n + m;
        }
        cout << endl;
    }
    else{
        ll sum;
        m = m + n;
        ll x = m / 60;
        sum = (ilk + x) % 24;
        if(sum <= 9){
            cout << "0" << sum << ':';
        }
        else{
            cout << sum << ':';
        }
        m %= 60;
        if(m <= 9){
            cout << "0" << m;
        }
        else{
            cout << m;
        }
        cout << endl;
    }
}

signed main(){
    speedyboy;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}


