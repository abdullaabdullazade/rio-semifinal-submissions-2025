#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=1e9-7;
    int yol=1;
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        while(j>=0 && a[j]>=b[i]){
            j--;
        }
        int olabilen=n-1-j;
        int qalan=n-1-i;
        if(olabilen<=qalan){
            yol=0;
            break;
        }
        yol=yol*(olabilen-qalan)%ans;
    }
    cout<<yol<<"\n";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}