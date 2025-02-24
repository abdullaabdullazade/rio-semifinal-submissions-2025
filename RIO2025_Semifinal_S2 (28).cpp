#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define ll long long
#define int ll
#define pb push_back
#define pii pair<int, int>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(v) v.begin(), v.end()
#define Endl endl

const int N=100009;
const int mod=1e9+7;

//mt19937 rnd(time(NULL));
//uniform_int_distribution<> gen(1, 2);

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.pb(x);
    }
    int ans=0, yx=0;
    for(int i=1; i<n; i++){
        if(yx==0){
            if(a[i]>a[i-1]){
                yx=1;
            }
            else{
                yx=-1;
            }
            continue;
        }
        if(yx==1 and a[i]<a[i-1]){
            ans++;
            yx=0;
            continue;
        }
        if(yx==-1 and a[i]>a[i-1]){
            ans++;
            yx=0;
            continue;
        }
    }
    cout<<ans+1<<endl;
}

signed main(){
    io;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}
