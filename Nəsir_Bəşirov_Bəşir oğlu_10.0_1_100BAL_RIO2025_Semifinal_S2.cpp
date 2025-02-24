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
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

#define int ll

const int sz = 1e5 + 5;
int n, a[sz];

void fmain(){
    cin >> n;
    set<int> st;
    map<int, int> mp;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    int p = 0;
    for(int i : st){
        mp[i] = ++p;
    }
    vi ind(n + 5, 0);
    for(int i = 1; i <= n; i++){
        a[i] = mp[a[i]];
        ind[a[i]] = i;
    }
    int res = 0, cur = 1;
    while(cur <= n){
        res++;
        int mx = cur;
        for(int i = ind[cur] + 1, j = 1; i <= n and a[i] == cur + j; i++, j++){
            mx = cur + j;
        }
        for(int i = ind[cur] - 1, j = 1; i >= 1 and a[i] == cur + j; i--, j++){
            mx = max(mx, cur + j);
        }
        cur = mx + 1;
    }
    cout << res << endl;
}

signed main(){
    // fastio;
    int tsts = 1;
    cin >> tsts;
    while(tsts--){
        fmain();
    }
}