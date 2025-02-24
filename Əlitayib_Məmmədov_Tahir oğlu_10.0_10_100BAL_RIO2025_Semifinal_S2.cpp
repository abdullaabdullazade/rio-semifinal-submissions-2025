#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
template<typename... T>
void see(T&... args) {((cin >> args), ...);}
template<typename... T>
void put(T&&... args) {((cout << args << ' '), ...);}
template<typename... T>
void putl(T&&... args) {((cout << args << ' '), ...); cout << endl;}
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define int long long
#define double long double
#define endl '\n'
#define rep(i,a,b) for(int i=a; i<b; i++)
#define rev(i,a,b) for(int i=a; i>b; i--)
#define sorta sort(a,a+n)
#define all(x) x.begin(),x.end()
#define vc vector<int>
#define vpc vector<pair<int,int>>
#define mpp make_pair
#define pb push_back
#define ff first
#define ss second
#define INF 1e18
#define Y "Yes"
#define N "No"
signed main() {
    speed;
    int t;
    cin >> t;
    while(t--) {
        int n,say=0;
        cin >> n;
        vpc v;
        rep(i,1,n+1) {
            int a;
            cin >> a;
            v.pb({a,i});
        }
        sort(all(v));
        int prev=v[0].ss;
        for (int i = 1; i < n; i++){
            if(abs(v[i].ss-prev)!=1)
                say++;
            prev=v[i].ss;
        }
        say++;
        cout << say << endl;
    }
}
