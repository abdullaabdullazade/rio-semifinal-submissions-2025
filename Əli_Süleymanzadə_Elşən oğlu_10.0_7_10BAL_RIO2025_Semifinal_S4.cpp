// Sometimes we try to understand errors we shouldn't...
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("no-stack-protector")
#include<bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<class T>
// using Tree=tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
#if !defined(ONLINE_JUDGE) and !defined(EVAL)
#include "template/debug.h"
#else
#define d(x...)
#endif
// TEMPLATE
string sp=" ";
#define fr first
#define sc second
#define ll long long
#define mkp make_pair
#define qll queue<ll>
#define dqll deque<ll>
#define mll map<ll,ll>
#define vll vector<ll>
#define er(x) erase(x)
#define pll pair<ll,ll>
#define ull unsigned ll
#define mne min_element
#define mxe max_element
#define in(x) insert(x)
#define rs(x) resize(x)
#define vpll vector<pll>
#define vvll vector<vll>
#define pq priority_queue
#define len(x)(ll)x.size()
#define pb(x) emplace_back(x)
#define lcm(x,y) x/__gcd(x,y)*y
#define all(x) x.begin(),x.end()
#define umll unordered_map<ll,ll>
#define log2(x)(63-__builtin_clzll(x))
#define popcnt(x) __builtin_popcount(x)
#define precision(x) fixed<<setprecision(x)
template<typename t1,typename t2>istream&operator>>(istream &is,pair<t1,t2>&x){return is>>x.fr>>x.sc;}
template<typename t1,typename t2>ostream&operator<<(ostream &os,pair<t1,t2>&x){return os<<x.fr<<' '<<x.sc;}
template<typename t1>istream&operator>>(istream &is,vector<t1>&vc){for(t1 &i:vc)is>>i;return is;}
template<typename t1>ostream&operator<<(ostream &os,vector<t1>&vc){for(t1 &i:vc)os<<i<<sp;return os;}
// #define ll int_fast32_t
// #define ll int_fast64_t
// #pragma GCC optimize("O2")
// #define umll gp_hash_table<ll,ll>
// #define umll cc_hash_table<ll,ll>
// #pragma GCC target("avx,avx2,fma")
// #pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
const ll INF=1e9;
const ll INFL=1e18;
const ll MOD=1e9+7;
// const ll MOD=998244353;
const ll maxn=2e3+5;
// TEMPLATE
ll n,m,k=0;
inline void prc(){}
vll getmin(ll x, vll v){
    auto it = lower_bound(all(v), x);
    if(it == v.begin()){
        return {v[it - v.begin()]}; // ancaq >= olana baxiriq
    }
    if(it == v.end()){
        return {v[m-1]}; // ancaq <= olana baxiriq
    }
    return {v[it-v.begin()], v[it-v.begin()-1]}; // iki terefine baxiriq
}
vvll v;
map<pll, ll>mp;
ll f(ll i, ll x, ll cm){
    if(i == n-1){
        return cm;
    }
    // if(mp.count({i, x})) return mp[{i, x}];
    ll cv = INF;
    vll tmp = getmin(x, v[i+1]);
    for(auto j : tmp){
        cv = min(cv, f(i+1, j, cm+abs(x-j)));
    }
    return mp[{i, x}] = cv;
}
void _(){
    mp.clear();
    cin>>n>>m;
    v.assign(n, vll(m, 0));
    cin>>v;
    for(ll i=0;i<n;i++) sort(all(v[i]));
    sort(all(v));
    ll mn = INF;
    for(ll j=0;j<m;j++){
        mn = min(mn, f(0, v[0][j], 0));
    }
    cout<<mn<<'\n';
}
signed main(){
    clock_t testcaseruntime=clock();
    cin.tie(0)->sync_with_stdio(0);
    prc();
    ll t=1;
    // cin>>t;
    for(ll tt=1;tt<=t;tt++){
        // cout<<"Case "<<tt<<": ";
        _();
    }
    cerr<<"\n\033[1;31mTime: \033[1;30m"<<(double)(clock()-testcaseruntime)/CLOCKS_PER_SEC<<"\033[1;32m seconds"<<'\n';
}