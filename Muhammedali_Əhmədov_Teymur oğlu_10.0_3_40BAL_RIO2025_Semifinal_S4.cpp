// Bismillahirrahmanirrahim
// sallamasyon idea
// ))
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define putr(x) cout<<x<<endl;return;

const int inf = LLONG_MAX,sze = 1e5+23, mod= 1e9+7, prime = 1453;

void fast(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> arr(n,vector<int>(k));
    for(int i =0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>arr[i][j];
        }
    }
    int l = 0;
    int r = 1e9;
    int ans=r;
    while(l<=r){
            int mid = (l+r)/2;
        set<pair<int,int>> var;
        for(int i =0;i<k;i++){
            var.ins({arr[0][i],arr[0][i]});
        }

        for(int i = 1;i<n;i++){
            if(var.empty()){
                break;
            }
            set<pair<int,int>> nxt;
            for(int j=0;j<k;j++){
                for(auto v:var){
                    if(arr[i][j]>=v.first && arr[i][j]<=v.second){
                        nxt.ins(v);
                    }
                    else{
                        if(arr[i][j]<v.first){
                            if(v.second - arr[i][j] <= mid){
                                nxt.ins({arr[i][j],v.second});
                            }
                        }
                        else{
                            if(arr[i][j] - v.first <= mid){
                                nxt.ins({v.first,arr[i][j]});
                            }
                        }
                    }
                }
            }
            var=nxt;
        }
        if(!var.empty()){
            r = mid-1;
            ans=mid;
        }
        else{
            l= mid+1;
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
