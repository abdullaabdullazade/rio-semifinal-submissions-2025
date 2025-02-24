#include "bits/stdc++.h"

using namespace std;

const int mxN = 1003;

multiset<int> rows[mxN];
int s[mxN][mxN];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N, K;
    cin >> N >> K;

    vector<pair<int,int>> vp;

    for (int i = 0; i < N; i ++){
        for (int j = 0; j < K; j ++){
            cin >> s[i][j];
            vp.emplace_back(s[i][j], i);
            rows[i].insert(s[i][j]);
        }
    }

    multiset<int> cur;

    for (int i = 0; i < N; i ++){
        cur.insert(*rows[i].begin());
    }

    sort(begin(vp),end(vp));

    int ans = INT_MAX;

    for (auto& [x, i] : vp){
        ans = min(ans, (*--end(cur)) - x);
        rows[i].erase(begin(rows[i]));
        cur.erase(cur.find(x));
        if (rows[i].empty()){
            break;
        } else {
            cur.insert(*rows[i].begin());
        }
    }

    cout << ans << endl;
}