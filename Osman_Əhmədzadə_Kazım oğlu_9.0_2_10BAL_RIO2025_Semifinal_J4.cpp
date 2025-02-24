#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MXN = 1500 + 6;
const int MOD = 1e9 + 7;
const int INF = 1e18;

void _(){
    int n;
    cin >> n;
    vector < int > a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    vector < int > cur = a;
    int q = 6;
    while(q--){
        if(is_sorted(cur.begin(), cur.end()))   break;
        vector < int > curr;
        curr.push_back(cur[cur.size() - 1]);
        curr.push_back(cur[0]);
        curr.push_back(cur[1]);
        cur = curr;
    }
    cout << (is_sorted(cur.begin(), cur.end()) ? "Yes" : "No") << endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)  _();
}
