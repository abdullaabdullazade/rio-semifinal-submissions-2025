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

map<int, int>m;

void solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a.pb(x);
    }
    vector<int>b;
    for(int i=0; i<n; i++){
        b.pb(a[i]);
    }
    sort(all(b));
    for(int i=0; i<n; i++){
        m[b[i]]=i;
    }
    int yx=0, q=0, ans=0;
    for(int i=1; i<n; i++){
        if(yx==0){
            int ind=m[a[i-1]];
            if(ind+1<n){
                if(b[ind+1]==a[i]){
                    yx=1;
                    continue;
                }
            }
            if(ind>0){
                if(b[ind-1]==a[i]){
                    yx=-1;
                    continue;
                }
            }
            ans++;
        }
        if(yx==1){
            int ind=m[a[i-1]];
            if(ind+1<n){
                if(b[ind+1]!=a[i]){
                    yx=0;
                    ans++;
                    continue;
                }
                else{
                    continue;
                }
            }
            if(ind+1==n){
                if(a[i]==b[ind]){
                    continue;
                }
            }
            yx=0;
            ans++;
        }
        if(yx==-1){
            int ind=m[a[i-1]];
            if(ind-1>=0){
                if(b[ind-1]!=a[i]){
                    yx=0;
                    ans++;
                    continue;
                }
                else{
                    continue;
                }
            }
            if(ind-1==-1){
                if(a[i]==b[ind]){
                    continue;
                }
            }
            yx=0;
            ans++;
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
