#include <bits/stdc++.h>
#define ll long long
#define int ll
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define pb push_back
#define nl '\n';
using namespace std;

// priority_queue<int, vector<int>, greater<int>> pq;
// A 65 Z 90 / a 97 z 122 /

bool is_prime(int n){
    for (int i = 2; i<=sqrt(n); i++){
        if (n%i == 0) return false;
    }
    return true;
}


void solve(){
    int t; cin >> t;
    while (t--){
        int n;
        cin >> n;

        deque<int> dq;
        set<int> st;
        int x;

        for (int i = 0; i<n; i++){
            cin >> x;
            dq.pb(x);
            st.insert(x);
        }

        int res = 1;

        for (int i = 1; i<n; i++){
            auto it1 = st.upper_bound(dq[i]);
            auto it2 = st.upper_bound(dq[i-1]);
            if (*it2 == dq[i] || *it1 == dq[i-1]) {

            } else{
                res++;
            }
        }

        cout << res << nl;
    }
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
