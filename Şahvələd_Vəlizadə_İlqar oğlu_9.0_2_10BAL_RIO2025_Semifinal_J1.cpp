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
    cin >> s;
    int ans = 0;
    ans += (s[3] - '0') * 10;
    ans += s[4] - '0';
    int basiki = (s[0] - '0') * 10;
    basiki += (s[1] - '0');
    cin >> m;
    int z = m+ans;
    if (z < 60) {
        cout << s[0] << s[1] << ':' << ans + m << endl;
        return;
    }
    if ((z >= 60) and (z % 60 == 0)) {
        basiki += z/60;
        if (basiki <= 23) {
            ans -= m;
            if (ans == 0) {
            cout << basiki << ":" << "00" << endl; // 13 : 30 // 30
            }
            else {
                if (z % 60 == 0) {
                cout << basiki << ":" << "00" << endl;
                }
            }
            return;
        }
    }
    if (z % 60 != 0 and z >= 60) {
        if (basiki <= 23) {
            basiki += z/60;
            if ((z-60) >= 10) {
                if ((z-((z/60)*60)) <= 9)
            cout << basiki << ":0" << z- ((z / 60) * 60);
            }
            else {
                cout << basiki << ":0" << z/60;
            }
        }
    }
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
