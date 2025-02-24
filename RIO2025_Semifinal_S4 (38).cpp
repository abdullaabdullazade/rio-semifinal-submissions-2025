// Bismillahirrahmanirrahim
// ))
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define putr(x) cout<<x<<endl;return;

const int inf = LLONG_MAX,sze = 2e5+23, mod= 1e9+7, prime = 1453;

void fast(){
    int n,k;
    cin>>n>>k;
    vector<int> total;
    vector<vector<int>> arr(n,vector<int>());
    for(int i = 0,x;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>x;
            arr[i].pb(x);
            total.pb(x);
        }
        sort(all(arr[i]));
    }
    sort(all(total));
    int l = 0;
    int r =  1e9+23;
    int ans=r;
    while(l<=r){
        int mid = (l+r)/2;
        bool flag=false;
        for(auto v:total){
                if(flag){
                    break;
                }
            int l = v;
            int r = v+mid;
            bool f=true;
            for(int i = 0;i<n;i++){
                    auto it = lower_bound(all(arr[i]),l);
                if( it==arr[i].end() || *it>r){
                    f=false;
                    break;
                }
            }
            flag|=(f);
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
