#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>
#define M_PI       3.14159265358979323846
#define FILER 0
using ll = long long;
using ull = unsigned long long;
using ld = long double;
const ll MOD = pow(10, 9) + 7;
const ll INFL = 0x3f3f3f3f3f3f3f3f;
const ull INFUL = 0x3f3f3f3f3f3f3f3f;
const ll INFT = 0x3f3f3f3f;
const ll MAX = 2e7 + 1;
const ll MODD = 998244353;
const double EPS = 1e-10;
#define V vector
#define pll pair<ll, ll>
#define pull2 pair<ull,ull>
#define MS multiset
#define M map
#define Q queue
#define PQ priority_queue
#define IOF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FOR(typ,i,a,b,c) for(typ i = a; i < b; i += c)
#define FORR(typ,i,a,b,c) for(typ i = a; i > b; i -= c)
#define FORA(a,i) for(auto i : a)
#define FORAE(a,i) for(auto &i : a)
#define all(v) v.begin(),v.end()
#define sorta(a) sort(all(a))
#define sortd(a) sort(all(a), greater<ll>())
#define setp(x) setprecision(x)<<fixed
#define RET return
#define log(a,b) log(b)/log(a)
#define WH(s) while(s)
#define WHI(t) WH(t--)
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define Yes cout<<"Yes"<<endl;
#define No cout<<"No"<<endl;
#define YESNO(s) cout<<(s?"YES":"NO")<<endl;
#define YesNo(s) cout<<(s?"Yes":"No")<<endl;
#define TYP 1
using namespace std;
ll n;
V<ll> a,b;
void solve()
{
    cin >> n;
    b.clear();
    a.assign(n + 1, 0);
    FOR(ll, i, 0, n, 1)cin >> a[i];
    a[n] = a[0];
    FOR(ll, i, 0, n, 1)if (a[i] > a[i + 1])b.push_back(i + 1);
    if (!b.size()) {
        cout << 1 << endl << 1 << endl;
        RET;
    }
    cout << b.size() << endl;
    FORA(b, i)cout << i << ' ';
    cout << endl;

}


void init()
{

    if (FILER)
    {
        freopen("pump.in", "r", stdin);
        freopen("pump.out", "w", stdout);
    }
}

void handle()
{
    init();
    ll t = 1;
    if (TYP)cin >> t;
    WHI(t)solve();
}

int main()
{
    IOF
        handle();
    RET 0;
}