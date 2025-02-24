#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define Mor_Te ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define intt long long
#define gcd __gcd
#define pb push_back
#define emb emplace_back
#define all(v) v.begin() ,v.end()
#define rall(v) v.rbegin() ,v.rend()
#define pii pair<intt , intt>
#define F first
#define S second

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using indexed_set = tree<T , null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update>;

template <typename T>
using indexed_multiset = tree<T , null_type , less_equal<T> , rb_tree_tag , tree_order_statistics_node_update>;

void sieve(intt n , vector<intt> v){
    vector<intt> primes(n + 1 , 1);
    primes[0] = primes[1] =  0;
    for(intt i = 2; i * i <= n; i++){
        if(primes[i]){
            v.pb(i);
            for(intt j = i * i; j <= n; j += i){
                primes[j] = 0;
            }
        }
    }
}

void phi(intt n){
    vector<intt> v(n + 1);
    for(intt i = 0; i <= n; i++){
        v[i] = i;
    }
    for(intt i = 1; i <= n; i++){
        if(v[i] == i){
            for(intt j = i; j <= n; j += i){
                v[j] = v[j] - (v[j] / i);
            }
        }
    }
}

intt C(intt n , intt k){ /// isledi
    intt ans = 1;
    if(k > n - k) k = n - k;
    for(intt i = 1; i <= k; i++){
        intt g = gcd(ans , i);
        ans = ans / g * (n - k + i) / (i / g);
    }
    return ans;
}

intt binpow(intt a , intt b){ /// islemedi
    intt res = 1;
    while(b){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

intt numdiv(intt n){ /// isledi
    intt res = 1 , cnt = 0;
    for(intt i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                cnt++; n /= i;
            }
            res *= (cnt);
            cnt = 1;
        }
    }
    return res;
}

void Yusiff(){
    string s; cin >> s;
    intt k; cin >> k;
    intt hour = k / 60;
    intt min = k - (k    * hour);
    string a , b;
    a += s[0];
    a += s[1];
    intt n = stoll(a);
    b += s[3];
    b += s[4];
    intt m = stoll(b);
    n += hour;
    m += min;
    intt q = m / 60;
    m = m - (q * 60);
    n += q;
    intt f = n / 24;
    n = n - (f * 24);
    if(n < 10){
        if(m < 10){
            cout << 0 << n << ":" << 0 << m << '\n';
        }
        else{
            cout << 0 << n << ":" << m << '\n';
        }
    }
    else{
        if(m < 10){
            cout << n << ":" << 0 << m << '\n';
        }
        else{
            cout << n << ":" << m << '\n';
        }
    }
}

signed main(){
    Mor_Te

    int t = 1;
    cin >> t;
    while(t--){
        Yusiff();
    }
}
