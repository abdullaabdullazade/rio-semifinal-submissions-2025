#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define tariyel ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int sz=2e6+5;
vector<int> v;
vector<int> rv;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v1(k);
    vector<int> v2(k);
    vector<int> res;
    for(int i=0;i<k;i++){
        cin>>v1[i];
    }
    for(int i=0;i<k;i++){
        cin>>v2[i];
    }
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            res.pb(abs(v1[i]-v2[j]));
        }
    }
    sort(res.begin(),res.end());
    cout<<res[0];
}
signed main(){
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
