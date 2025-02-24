#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll, ll>> v;
    for (int i=0; i<n; i++){
        ll x;
        cin>>x;
        v.pb({x, i});
    }
    sort(v.begin(), v.end());
    ll i=0, x=0, say=1;
    while (i<n-1){
        if (x==0){
            if (v[i+1].s==v[i].s+1){
                x=1;
                i++;
            }
            else if (v[i+1].s==v[i].s-1){
                x=-1;
                i++;
            }
            else{
                say++;
                i++;
                continue;
            }
        }
        else{
            if (v[i+1].s-v[i].s==x){
                i++;
            }
            else{
                say++;
                i++;
                x=0;
                continue;
            }
        }
    }
    cout<<say<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
    
    return 0;
}