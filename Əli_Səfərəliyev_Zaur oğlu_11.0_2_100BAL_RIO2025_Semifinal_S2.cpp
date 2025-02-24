#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>

bool cmd(pair<ll,ll> &p1 , pair<ll,ll> &p2){
    return p1.first < p2.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> arr;
        for(ll i=0;i<n;i++){
            ll a;
            cin >> a;
            arr.pb({a,i});
        }
        sort(arr.begin(),arr.end(),cmd);
        ll ans = 1;
        for(ll i =1;i<n;i++){
            ll pos = arr[i].second;
            ll pre_pos = arr[i-1].second;
            if(abs(pos - pre_pos) > 1){
                ans++;
            }
        }
        cout << ans << endl;

    }
}
