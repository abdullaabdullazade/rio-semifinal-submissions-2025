#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, k;
    cin >> n >> k;
    vector<vector<int>> teams(n, vector<int>(k));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> teams[i][j];
        }
        sort(teams[i].begin(), teams[i].end());
    }
    
    multiset<pair<int, int>> selected;
    vector<int> idx(n, 0);
    
    for (int i = 0; i < n; i++) {
        selected.insert({teams[i][0], i});
    }
    
    int min_diff = LLONG_MAX;
    while (true) {
        int min_val = selected.begin()->first;
        int max_val = selected.rbegin()->first;
        min_diff = min(min_diff, max_val - min_val);
        
        int team_id = selected.begin()->second;
        selected.erase(selected.begin());
        
        idx[team_id]++;
        if (idx[team_id] == k) break;
        
        selected.insert({teams[team_id][idx[team_id]], team_id});
    }
    
    cout << min_diff << "\n";
    return 0;
}
