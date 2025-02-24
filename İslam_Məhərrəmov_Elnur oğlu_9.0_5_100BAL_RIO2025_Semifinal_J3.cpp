#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
using namespace std;
const int sz = 1e5+5;
const int inf = 1e9+7;
const long long infl = 1e18+1LL;


int sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }return sum;
}


int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}



void solve(){
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    vector<pair<int, int>> v, w;
    for(int i = 0; i < n; i++){
        int c = 0, s = 0;
        for(int j = 0; j < m; j++){
            if(a[i][j]=='0'){
                c++;
            }else {
                s++;
            }

        }v.push_back({c, s});
    }
    for(int j = 0; j < m; j++){
        int cc=0, ss=0;
        for(int i = 0; i < n; i++){
            if(a[i][j]=='0'){
                cc++;
            }else {
                ss++;
            }
        }w.push_back({cc, ss});
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j]=='0'){
                if((v[i].first==1 && w[j].first==1) || (v[i].first==m && w[j].first==n)){
                    ans++;
                }
            }else {
                if((v[i].second==1 && w[j].second==1) || (v[i].second==m && w[j].second==n)){
                    ans++;
                }
            }
        }
    }cout << ans;

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


        solve();


    return 0;
}
