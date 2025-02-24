// Bismillahirrahmanirrahim
// ))

#include <bits/stdc++.h>
using namespace std;

//#define int long long int
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define putr(x) cout<<x<<endl;return;

const int inf = LLONG_MAX,sze = 2e5+23, mod= 1e9+7, prime = 1453;

void fast(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> total;
    vector<vector<int>> arr(n,vector<int>(k));
    for(int i = 0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
            total.pb({arr[i][j],i});
        }
    }
    sort(all(total));
    int l = 0;
    int r =  1e9;
    int ans=r;
    while(l<=r){
        int mid = (l+r)/2;
        bool flag=false;
        int var=0;
        vector<int> cnt(n+23,0);
        multiset<pair<int,int>> icinde;
        for(auto v:total){
            if(var==n){
                flag=true;
                break;
            }
            icinde.ins(v);
            cnt[v.second]++;
            if(cnt[v.second]==1){
                    var++;
            }
            while( (*icinde.rbegin()).first -  (*icinde.begin()).first > mid ){
                auto it = *icinde.begin();
                icinde.erase(icinde.begin());
                cnt[it.second]--;
                if(cnt[it.second]==0){
                    --var;
                }
            }
            if(var==n){
                flag=true;
                break;
            }
        }

        if(flag){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }

    }

    putr(ans);

}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    //cin>>tt;
    while(tt--){
        fast();
    }

    return 0;
}
