#include<bits/stdc++.h>
//         www       //
using namespace std;
#define rev(i,a,b) for(int i = a;i <= b ;i++)
#define rep(i,a,b) for(int i = a;i >= b ;i--)
#define fori for(int i = 1; i <= n ; i++)
#define all(v) (v.begin(), v.end())
#define ll long long
#define pb push_back
#define ld double ll
#define S second
#define F first
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int N = 1e5 + 10;
const int sz = 1e5 + 5;
const int mod1 = mod;
const ll INF = 1e18;
const int sz1 = sz;
const int B = 40;
const int P = 31;
//bitset<50> bt;
vector<vector<int>> g;
vector<int> check;
vector<int> dp;
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin>>a[i][j];
        }
    }
    int mini = inf;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int k = 1; k <= m; k++){
                mini = min(mini,abs(a[i][j] - a[i - 1][k]));
            }
        }
    }
    cout<<mini;

    cout<<endl;
}
int main(){
    int T = 1;
    //cin>>T;
    for(int i = 1; i <= T ; i++){
        solve();
    }

    return 0;
}
