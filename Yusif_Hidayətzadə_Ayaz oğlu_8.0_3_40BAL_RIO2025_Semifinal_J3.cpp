#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

#define Fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define double long double
#define endl '\n'
#define line "--------------\n"
#define nline "\n--------------\n"
#define pb push_back
#define pii pair<int,int>
#define F first
#define S second
#define take(aba) for (auto &abab : aba) cin>>abab;
#define print(aba, sep) for (auto abab : aba) cout<<abab<<sep;
#define all(aba) aba.begin(), aba.end()
#define rall(aba) aba.rbegin(), aba.rend()
#define stop(msg) {cout<<msg; return;}

int dx4[] = {0, 1, 0, -1};
int dy4[] = {1, 0, -1, 0};
int dx8[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy8[] = {1, 1, 0, -1, -1, -1, 0, 1};
vector<int> BFS(int v, vector<vector<int>> &adj){
    int n = adj.size();
    queue<int> q;
    vector<bool> used(n, 0);
    vector<int> dist(n, -1);
    q.push(v);
    dist[v] = 0;
    used[v] = 1;
    while (!q.empty()){
        int from = q.front();
        q.pop();
        for (int to : adj[from]){
            if (used[to]) continue;
            used[to] = 1;
            dist[to] = dist[from]+1;
            q.push(to);
        }
    }
    return dist;
}

int ctoi(char c) {return (int)(c-'0');}
char itoc(int n) {return (char)(n+'0');}

bool isPrime(int n){
    if (n == 1) return 0;
    if (n%2 == 0) return (n == 2);
    for (int i=3; i*i<=n; i+=2){
        if (n%i == 0) return 0;
    }
    return 1;
}
vector<bool> sieve(int n){
    vector<bool> prime(n+1, 1);
    prime[0] = prime[1] = 0;
    for (int i=2; i<=n; i++){
        if (prime[i]){
            for (int j=i*2; j<=n; j+=i) prime[j] = 0;
        }
    }
    return prime;
}
int gpow(int a, int b){
    int res = 1;
    while (b--) res*=a;
    return res;
}
double logk(int a, int k){return log2(a) / log2(k);}
int GCD(int a, int b){
    if (b == 0) return a;
    return GCD(b, a%b);
}
int LCM(int a, int b){return a/GCD(a,b)*b;}

const int MOD = 1e9+7;
const int N = 2e5+5;
const int INF = 1e18;

vector<string> l;
int cond(int a, int b){
    // ath line
    // bth column
    char tmp = '?';
    for (int i=0; i<l.size(); i++){
        if (i == a) continue;
        if (tmp == '?'){
            tmp = l[i][b];
            continue;
        }
        if (l[i][b] != tmp) return 0;
    }
    for (int i=0; i<l[0].size(); i++){
        if (i == b) continue;
        if (tmp == '?'){
            tmp = l[a][i];
            continue;
        }
        if (l[a][i] != tmp) return 0;
    }
    return 1;
}

void solve(){
    int n,m,res=0; cin>>n>>m;
    l.resize(n);
    take(l);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++) res+=cond(i,j);
    }
    cout<<res;
}

signed main(){
    Fast;
    int t=1;
    //cin>>t;
    while (t--){
        solve();
    }
    return 0;
}
