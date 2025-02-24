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
#define F first
#define S second

const int N=1009;
const int mod=1e9+7;

//mt19937 rnd(time(NULL));
//uniform_int_distribution<> gen(1, 2);

vector<int>a[N];
map<int, int>ind;

void solve(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            a[i].pb(x);
        }
    }
    for(int i=0; i<n; i++){
        sort(all(a[i]));
    }
    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        ind[i]=m-1;
    }
    while(true){
        int mx=INT_MIN, mn=INT_MAX;
        for(int i=0; i<n; i++){
            mx=max(mx, a[i][ind[i]]);
            mn=min(mn, a[i][ind[i]]);
        }
//        cout<<mx<<" "<<mn<<endl;
        ans=min(ans, mx-mn);
        int yx=0;
        for(int i=0; i<n; i++){
            while(a[i][ind[i]]==mx and ind[i]>0){
                ind[i]--;
//                cout<<i<<" "<<ind[i]<<endl;
                yx++;
            }
        }
        if(yx==0){
            break;
        }
    }
    cout<<ans<<endl;
}

signed main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
