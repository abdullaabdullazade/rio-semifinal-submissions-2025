#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
using namespace std;
const int oo = 1e18 + 8, MAX = 2e5 + 5, MOD = 1e9 + 7;

void solve(){
    int n; cin >> n;
    int arr[n + 1];
    vector<int> v1, v2, v3;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] < arr[i % n + 1]){
            v1.push_back(i);
        }
        else if(arr[i] > arr[i%n + 1]){
            v2.push_back(i);
        }
        else{
            v3.push_back(i);
        }
    }
    if(!v1.size() && v3.size()){
        v1.push_back(v3.back());
        v3.pop_back();
    }
    if(!v2.size() & v3.size()){
        v2.push_back(v3.back());
        v3.pop_back();
    }
    if(!v1.size() || !v2.size()){
        cout << "-1\n";
        return;
    }
    cout << v1.size() << '\n';
    for(int a : v1) cout << a << ' ';
    cout << '\n';
}

signed main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
}
