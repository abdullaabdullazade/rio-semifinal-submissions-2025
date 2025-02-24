#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 100005;
int a[sz];

void solve(){
    int n;
    cin >> n;
    vector<int> ans;
    vector<int> v(n);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 1; i < n; i++){
        sum += abs(a[i] - a[i+1]);
        if(a[i] - a[i+1] >= 0){
            ans.push_back(i);
        }
    }
    sum += abs(a[n] - a[1]);
    if(a[n] - a[1] >=0){
        ans.push_back(n);
    }
    if(sum == 0){
        cout << 1 << endl << 1 << endl;
        return;
    }
    else if(sum % 2 == 0){
        cout << ans.size() << endl;
        for(int i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }

}

signed main(){
    int t = 1;
    cin >> t;
    while(t--) solve();
}
