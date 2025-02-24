#include<bits/stdc++.h>
#define int long long
#define sz size()
#define S second
#define F first
#define pb push_back
using namespace std;
// 100+10+10
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    if(is_sorted(a,a+n)){
        cout << 1 << endl;
        return;
    }
    reverse(a,a+n);
    if(is_sorted(a,a+n)){
        cout << 1 << endl;
        return;
    }
    else{
        cout << 2 << endl;
    }
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}