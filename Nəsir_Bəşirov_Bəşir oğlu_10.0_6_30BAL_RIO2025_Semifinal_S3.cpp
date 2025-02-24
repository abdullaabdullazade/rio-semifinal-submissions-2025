#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define endl '\n'
#define pb push_back
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

#define int ll

const int sz = 1e5 + 5;
int n, a[sz];

void fmain(){
    cin >> n;
    if(n > 20){
        cout << 0;
        return;
    }
    multiset<pii> mt;
    int s = 0;
    vi v = {0};
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(i > 1)   v.pb(abs(a[i] - a[i - 1])), s += abs(a[i] - a[i - 1]);
    }
    v.pb(abs(a[n] - a[1])), s += abs(a[n] - a[1]);
    if(s % 2){
        cout << -1 << endl;
        return;
    }
    for(int mask = 1; mask < (1 << n); mask++){
        int sum = 0;
        vi res;
        for(int i = 1; i <= n; i++){
            if((1 << (i - 1)) & mask){
                sum += v[i];
                res.pb(i);
            }
        }
        if(sum == s / 2){
            cout << res.size() << endl;
            for(int i : res){
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}

signed main(){
    // fastio;
    int tsts = 1;
    cin >> tsts;
    while(tsts--){
        fmain();
    }
}