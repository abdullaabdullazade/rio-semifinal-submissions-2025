#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mir signed
#define pii pair<int,int>
#define tup tuple<int,int,int>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define bs << ' '
#define bss << ' ' <<
#define endl << '\n'
#define each(i,x) for(auto &i : x)
#define say(x) cout << x endl;
#define fastt ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
const int inf = 1e9;
const long long inff = 1e17;
const int mod = 1e9 + 7;
vector<int> dx = {0,1,0,-1}, dy = {1,0,-1,0};
 
void maxx(int &a,int b){
    a = max(a,b);
}
void minn(int &a,int b){
    a = min(a,b);
}
 
int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a % b);
}
 
int lcm(int a,int b){
    return a/gcd(a,b) * b;
}

int cel(int a,int b){
    return (a - 1) / b + 1;
}
 
int binpow(int a,int b){
    if(!b) return 1;
    int res = binpow(a % mod, b / 2);
    res = (res * res) % mod;
    if(b & 1) res = (res * (a % mod)) % mod;
    return res;
}
 
const int sq = 100000;
 
string xorr(string a, string b){
    if(a.size() < b.size()) swap(a, b);
    int j = b.size() - 1;
    for (int i = a.size() - 1; i >= 0; --i){
        if(j < 0) break;
        a[i] = char((a[i] - '0') ^ (b[j] - '0') + '0');
        j--;
    }
    return a;
}
 
int vur(int a, int b){
    return (((a * b) % mod) + mod) % mod;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int> temp(n+1);
    for(int i=1;i<=n;++i)cin >> temp[i];
    vector<int> sira(n);
    for(int i=1;i<=n;++i)sira[i-1] = abs(temp[i] - temp[i + 1 - (i == n ? n : 0)]);
    int cem = 0;
    each(i,sira)cem += i;
    for(int mask=1;mask < (1 << n) - 1;++mask){
        int a = 0;
        vector<int> hm;
        for(int i=0;i<n;++i){
            if((1 << i) & mask){
                a += sira[i];
                hm.push_back(i+1);
            }
        }
        if(a == cem/2){
            say(hm.size())
            each(i,hm)cout << i bs;
            cout endl;
            return;
        }
        
    }
}
mir main(){
    fastt
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; ++tt){
        // cout << "Case " << tt << ": ";
        solve();
    }
    return 0;
}
