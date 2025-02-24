#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &i : a){
        cin >> i;
    }
    vector<int>v = a;
    reverse(v.begin(), v.end());
    if(is_sorted(a.begin(), a.end()) || is_sorted(v.begin(), v.end())){
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}

signed main(){
    int T = 1;
    cin >> T;
    while(T--){
        solve();
    }
}
