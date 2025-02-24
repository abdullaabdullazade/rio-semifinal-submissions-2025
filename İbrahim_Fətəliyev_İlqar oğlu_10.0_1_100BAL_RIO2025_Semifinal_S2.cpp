#include <bits/stdc++.h>

#define int long long

const int MAX = 1e1+100;
const int MOD = 100;
const int oo = 1e18;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    int cnt = 1;
    int par = v[0];
    bool a = false,d = false;
    vector<int> v1 = v;
    sort(v1.begin(),v1.end());
    for(int i = 1;i<n;i++){
        auto upper = upper_bound(v1.begin(),v1.end(), par);
        auto upper2 = upper_bound(v1.begin(),v1.end(), v[i]);
        if(!a && !d){
            if(par<v[i]){

                if(v[i] == *upper){
                    a = true;
                }else{
                    cnt++;
                }
            }else if(par>v[i]){
                if(par == *upper2){
                    d = true;
                }else{
                    cnt++;
                }
            }
        }else if(a){
            if(par<v[i]){
                if(v[i] == *upper){
                    a = true;
                }else{
                    a = false;
                    cnt++;
                }
            }else if(par>v[i]){
                cnt++;
                a = false;
            }
        }else if(d){
            if(par>v[i]){
                if(par == *upper2){
                    d = true;
                }else{
                    d = false;
                    cnt++;
                }
            }else if(par<v[i]){
                cnt++;
                d = false;
            }
        }
        par = v[i];
    }
    cout << cnt << '\n';
}

signed main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}
