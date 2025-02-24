#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define nl '\n'
#define pb push_back
#define all(s) s.begin(), s.end()
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pll pair<ll, ll>
#define heap ll, vector<ll>, greater<ll>
const ll sz=2e5+5, inf=1e18, mod=1e9+7;
void solve(){
    ll l, r;
    cin>>l>>r;
    for(ll i=l; i<=r; i++){
        string s=to_string(i);
        string t=s;
        reverse(all(t));
        if(s==t){
            cout<<"Palindrome!"<<endl;
        }
        else cout<<i<<endl;
    }
}
signed main(){
    fast;
    ll t=1;
    //cin>>t;
    for(ll cs=1; cs<=t; cs++){
        solve();
    }
}
/*
    Author : Omar Aliyev
*/
