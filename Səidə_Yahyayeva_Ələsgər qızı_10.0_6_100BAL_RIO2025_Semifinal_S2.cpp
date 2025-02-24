#pragma GCC optimize("O3")
#include <bits/stdc++.h>
//Und der Haifisch der hat tränen
//Und die laufen vom Gesicht
//Doch der Haifisch lebt im wasser
//So die Tränen sieht man nicht ಥ_ಥ
using namespace std;
#define ll long long
#define enter ios_base::sync_with_stdio(0); cin.tie(0)
#define dl long double
#define pb push_back
#define str string
#define endl '\n'
#define ENDL endl
#define F first
#define S second
#define all(v) v.begin(),v.end()
const ll sz = 2e6 +5;

bool used[sz];


void solve(){
    enter;

    ll n;
    cin >> n;
    ll a[n+5],b[n+5];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);

    map<ll ,ll> mp;
    for(ll i =0; i <n; i++)
        mp[b[i]] = i;

    ll ans = 1;
    for(ll i = 0; i < n -1; i++){
        if(abs(mp[a[i]] - mp[a[i +1]]) != 1)
            ans++;
    }

    cout<<ans<<endl;
}


int main(){
    enter;

    ll t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}







