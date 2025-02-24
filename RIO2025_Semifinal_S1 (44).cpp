// Bismillah

// Gozlediyim ballar:
// A : 100
// B : 100
// C : 40 - 100
// D : 10 - 99

// Aldigim ballar:
// A : 
// B :
// C :
// D :
#pragma GCC optimize("O3")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define fr first
#define sc second
#define ll long long
#define mkp make_pair
#define qll queue<ll>
#define er(x) erase(x)
#define vll vector<ll>
#define in(x) insert(x)
#define pll pair<ll,ll>
#define vvll vector<vll>
#define vpll vector<pll>
#define pq priority_queue
#define pb(x) emplace_back(x)
#define all(x) x.begin(), x.end()
string sp=" ";
istream& operator>>(istream& is, pll &p){ is>>p.fr>>p.sc; return is; }
ostream& operator<<(ostream& os, pll &p){ os<<p.fr<<' '<<p.sc; return os; }
template<typename t1> istream& operator>>(istream& is, vector<t1> &v){ for(auto &i:v) is>>i; return is; }
template<typename t1> ostream& operator<<(ostream& os, vector<t1> &v){ for(auto &i:v) os<<i<<sp; return os; }
inline void d(ll &x){ cerr<<"DEBUG : "<<' '<<x<<'\n'; }
inline void d(vll &v){ cerr<<"DEBUG : "<<' '<<v<<'\n'; }
inline void d(pll &p){ cerr<<"DEBUG : "<<' '<<p<<'\n'; }
inline void d(string &s){ cerr<<"DEBUG : "<<' '<<s<<'\n';}
ll n,m,k=0;
inline void prc(){}
void _(){
    cin>>n>>m;
    for(ll i=n;i<=m;i++){
        string s=to_string(i);
        string s2=s;
        reverse(all(s2));
        if(s==s2) cout<<"Palindrome!\n";
        else cout<<i<<'\n';
    }
}
signed main(){
    prc();
    ll t=1;
    // cin>>t;
    for(ll tt=1;tt<=t;tt++){
        _();
    }
}