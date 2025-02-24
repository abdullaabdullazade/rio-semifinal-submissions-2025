#include "bits/stdc++.h"
#include <cstdio>
#include <cmath>
/**#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#include <bits/extc++.h>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> rbt;**/
#define ll long long int
#define lb lower_bound
#define ub upper_bound
#define Yes cout << "Yes"<<endl
#define No cout << "No"<<endl
#define YES cout << "YES"<<endl
#define NO cout << "NO"<<endl
#define gcd(a,b)   __gcd(a, b)
#define  __lcm(a,b)   a*b / (__gcd(a, b))
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(),x.end()
#define arrll(x,n) x,x+n
#define make_upper(ch) toupper(ch)
#define make_lower(ch) tolower(ch)
#define check_upper(ch) isupper(ch)
#define check_lower(ch) islower(ch)
#define pb push_back
#define endl '\n'
#define sz(x) (ll)(x).size()
#define YOU_ARE_HACKED system("color 0A"); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
/**
    WRITEN BY YOU
    ░█████╗░░░░░░░░░░░░░░░
    ██╔══██╗░░██╗░░░░██╗░░
    ██║░░╚═╝██████╗██████╗
    ██║░░██╗╚═██╔═╝╚═██╔═╝
    ╚█████╔╝░░╚═╝░░░░╚═╝░░
    ░╚════╝░░░░░░░░░░░░░░░
**/
#define pll pair<ll,ll>
using namespace std;
const ll funcmod = 1000003;
const ll fact = 20;
const double pi = 3.14159265358979323846;
const ll inf = 2*1e9+7;
const ll mod = 1e9+7;
const ll inff = 9*1e18+7;
const ll gsz = 2e3+7;
const ll dpsz = 1e5+7;
const ll sz = 2e3+7;
 
 
ll t=1;
ll i,j;
ll cnt;
ll n,m,k,q;

 
 
 
 
 
void solve(){
    ll l,r;
    cin>>l>>r;
    while(r>=l){
        string s;
        s=to_string(l);
        string rs=s;
        reverse(all(rs));
        bool bl=true;
        for(i=0;s.size()>i;i++){
            if(s[i]!=rs[i]){
                bl=false;
                break;
            }
        }
        if(bl){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<l<<endl;
        }
        l++;
    }
}


 
 
 
signed main()
{
    YOU_ARE_HACKED;
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    ///cin>>t;
    while(t--){
        solve();
    }
    ///time;
}