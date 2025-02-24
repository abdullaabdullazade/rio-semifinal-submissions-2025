#include <bits/stdc++.h>
using namespace std;
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define read(a, n) for(ll i = 0; i < n; i++){cin>>a[i];}
#define fori(n) for(ll i = 0; i < n; i++)
#define forj(n) for(ll j = 0; j < n; j++)
#define ar array
#define ss second
#define ff first
void solve(){
    ll saat, deq, d;
    char c;
    cin >> saat >> c >> deq >> d;
    deq += d;
    if(deq >= 60){saat++, deq -= 60;}
    saat %= 24;
    if(saat < 10) cout << 0;
    cout << saat << c;
    if(deq < 10) cout << 0;
    cout << deq << endl;
}

int main(){
    speed
    ll t; cin >> t;
    while(t--) solve();
}
