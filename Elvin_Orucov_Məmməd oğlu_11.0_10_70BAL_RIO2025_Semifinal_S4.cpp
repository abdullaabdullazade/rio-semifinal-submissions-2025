#pragma GCC_optimize(O3);
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define ll long long
//#define int ll
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

vector<int>b[N];
vector<int>a[N];
int ind[N];

void solve(){
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x;
            cin>>x;
            b[i].pb(x);
        }
    }
    for(int i=0; i<n; i++){
        set<int>s;
        for(int j=0; j<m; j++){
            s.insert(b[i][j]);
        }
        for(int j : s){
            a[i].pb(j);
        }
    }
    int ans=INT_MAX;
    for(int i=0; i<n; i++){
        ind[i]=a[i].size()-1;
    }
    int tt=n*m;
    int cnt=0;
    while(true){
        if(cnt==100000000){
            break;
        }
        int mx=INT_MIN, mn=INT_MAX;
        for(int i=0; i<n; i++){
            mx=max(mx, a[i][ind[i]]);
            mn=min(mn, a[i][ind[i]]);
        }
        ans=min(ans, mx-mn);
        if(ans==0){
            break;
        }
        int yx=0;
        for(int i=0; i<n; i++){
            cnt++;
            if(a[i][ind[i]]==mx and ind[i]>0){
                ind[i]--;
                yx++;
            }
        }
        if(yx==0){
            break;
        }
    }
    for(int i=0; i<n; i++){
        ind[i]=0;
    }
    while(true){
        int mx=INT_MIN, mn=INT_MAX;
        for(int i=0; i<n; i++){
            mx=max(mx, a[i][ind[i]]);
            mn=min(mn, a[i][ind[i]]);
        }
        ans=min(ans, mx-mn);
        if(ans==0){
            break;
        }
        int yx=0;
        for(int i=0; i<n; i++){
            if(a[i][ind[i]]==mn and ind[i]<n-1){
                ind[i]++;
                yx++;
            }
        }
        if(yx==0){
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
