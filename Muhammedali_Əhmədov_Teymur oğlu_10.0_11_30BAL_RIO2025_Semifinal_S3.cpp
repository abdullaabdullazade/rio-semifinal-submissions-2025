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
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> brr;
    for(int i=0,x;i<n;i++){
        cin>>x;
        arr.pb(x);
    }
    int sum=0;
    for(int i = 0;i<n;i++){
            brr.pb(abs(arr[(i+1)%n] - arr[i]));
        //brr.pb(arr[i]);
        sum+=brr.back();
    }
    if(sum%2){
        putr(-1);
    }
    //brr=arr;
        int x = sum/2;
    if(n<=20){
        for(int i = 1;i<(1<<n);i++){
            int s=0;
            vector<int> lst;
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    s+=brr[j];
                    lst.pb(j+1);
                }
            }

            if(lst.size()!=n && s==x){
                cout<<lst.size()<<endl;
                for(auto v:lst){
                    cout<<v<<" ";
                }
                cout<<endl;
                return;
            }
        }
    }

    else{
        int s =0;
        vector<vector<int>> dp(sze,vector<int>());
        for(int i = 0;i<n;i++){
            for(int j=sze-1;j>=0;j--){
                if(dp[j].empty() && j>=brr[i] && (j==brr[i] || !dp[j - brr[i]].empty() )){
                    dp[j]=dp[j - brr[i]];
                    dp[j].pb(i+1);
                }
            }
        }
        if(!dp[x].empty()){
            cout<<dp[x].size()<<endl;
            for(auto v:dp[x]){
                cout<<v<<" ";
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

signed main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    //cout.tie(nullptr);

    int tt = 1;
    cin>>tt;
    while(tt--){
        fast();
    }

    return 0;
}
