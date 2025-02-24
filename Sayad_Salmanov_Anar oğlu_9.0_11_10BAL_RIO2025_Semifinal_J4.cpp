/*
author : Sayadd
*/
/*
--------------OPTİMİZE------------------
*/
#include <bits/stdc++.h>
/*
--------------FİNİSH--------------------
/*
                                    DEFINES
--------------------------------------------------------------------------------------------------
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
------------YES_NO----------------
*/
#define YES                                   cout << "YES\n"
#define NO                                    cout << "NO\n"
#define Yes                                   cout << "Yes\n"
#define No                                    cout << "No\n"
#define no                                    cout << "no\n"
#define yes                                   cout << "yes\n"
/*
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
------------Finish----------------
*/
#define time                                  cerr<< "\nTime elapsed : "<<clock() * 1000.0/ CLOCKS_PER_SEC << "ms\n"
#define ins                                   insert
#define forn(i,n)                             for(int i=0;i<n;i++)
#define forn1(i,n)                            for(int i=1;i<=n;i++)
#define pb                                    push_back
#define ff                                    first
#define ss                                    second
#define iwillwinthefinal                      ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define en                                    "\n"
#define pb                                    push_back
#define ll                                    long long
#define ld                                    long double
#define lli                                   long long int
#define ull                                   unsigned long long
#define ulli                                  unsigned long long int
#define all(x)                                x.begin(),x.end()
#define rall(x)                               x.rbegin(),x.rend()
#define pll                                   pair<ll,ll>
/*
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
                                         ENDS
--------------------------------------------------------------------------------------------------
*/
using namespace std;
/*
void decimal()
{

    string s="";
    int a;
    cin>>a;
    while(a!=0)
    {
        if(a%2==1) s+='1';
        else s+='0';
        a/=2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<en;
}
*/
ll lcm(ll a, ll b)
{
    return a / __gcd(a, b) * b;
}
const ll inf = 1e18;
const ll sz = 2e5+5;
const ll mod = 1e9+7;
/*
ll pw(ll a, ll b)
{
    ll res=1;
    while(b) 
    {
        if(b&1)
         res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}   
*/
void solve()
{
        ll n; cin>>n;
        ll a,b,c; cin>>a>>b>>c;
        bool niga=false;
        if(a<=b and b<=c) niga=true;
        if(c<=a and a<=b) niga=true;
        if(b<=c and c<=a) niga=true;
        cout<<(niga ? "Yes" : "No")<<en;
}
signed main()
{
    iwillwinthefinal;
    ll t;cin>>t;for(int cs=1; cs<=t; cs++)
    //  cout << "Case " << cs << ": "<<en;
    solve();
    time;
    /*
    auto start=high_resolution_clock::now();
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cerr<<en<<"Time taken:"<<duration.count()/1000000.0<<"seconds"<<en;
    */
}
