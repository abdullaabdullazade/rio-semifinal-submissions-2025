#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

const int sz = 2e5  + 5;

void solve(){
    int n; cin >> n;
    vector<int>v;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] >= arr[i+1]) v.push_back(i+1);
    }
    if(arr[n-1] >= arr[0]) v.push_back(n);
    sort(arr, arr + n);
    if(arr[0] == arr[n - 1]){
        cout << "1\n1\n";
    }
    else{
        cout << v.size() << '\n';
        for(int i: v) cout << i << ' ';
        cout << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0); int t;
    cin >> t; while(t--) solve();
}