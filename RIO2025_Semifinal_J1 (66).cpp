#include <bits/stdc++.h>
#include <algorithm>
#define int long long
#define push_back pb
#define endl '\n'
using namespace std;
const int MAX = 1e3;
const int oo = 1e18;
int n,m,k;
vector<int> g[MAX];
bool used[MAX];

int dfs(int node) {
    used[node] = true;
    for (int to : g[node]){
        if (!used[to]) {
            dfs(to);
        }
    }
}

vector<int> bfs(int start, int p)
{
    vector<int> dist(n+1);
    vector<bool> used(n+1);
    queue<int> q;
    q.push(start);
    used[start] = true;
    dist[start] = 0;
    while (q.size()) {
        int node = q.front();
        q.pop();
        for (int to : g[node]) {
            if (used[to])continue;
            used[to]=true;
            dist[to] = dist[node] + 1;
            q.push(to);
            if (to == p) return dist;
        }
    }
    return dist;
}

void solve () {
    string s;
    cin >> s >> m;
    int basiki = (s[0]- '0') * 10;
    basiki += s[1] - '0';

    int soniki = (s[3]-'0') * 10;
    soniki += s[4] - '0';
    soniki += m;
    basiki += soniki / 60;
    int bass = basiki%24;
    if (bass >= 10){
        cout << bass;
    }
    else cout << 0 << bass;

    cout << ':';

    int bas = soniki % 60;
    if (bas >= 10){
        cout << bas;
    }
    else cout << 0 << bas;
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }
}
