#include<bits/stdc++.h>
#define int long long
#define sz size()
#define S second
#define F first
#define pb push_back
using namespace std;
// 100+10+10+40
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    int l=0;
    int ans=1;
    while(l<n){
        if(a[l]>a[l+1] and l+1<n){
            if(a[l]-a[l+1]!=1)ans++;
        }
        else{
            if(a[l]<a[l+1] and l+1 <n){
                if(a[l+1]-a[l]!=1)ans++;
            }
        }
        l++;
    }
    cout << ans << endl;
}
signed main(){
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
}
