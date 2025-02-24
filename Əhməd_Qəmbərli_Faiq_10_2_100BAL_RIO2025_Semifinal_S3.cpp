#include "bits/stdc++.h"

using namespace std;

#define FOR(i,a,b)for(int i=a;i<b;i++)
#define F0R(i,a)FOR(i,0,a)
#define rep(a)F0R(_,a)
#define each(i,a)for(auto&i:a)
#define all(a)begin(a),end(a)
#define sz(a)int(a.size())
#define con const int

using ll = long long;
using str = string;

con mxN = 1e5 + 5;

int a[mxN];

int main(){
    int T;
    cin >> T;

    rep (T){
        int N;
        cin >> N;

        int ls = 0;
        int cnt = 0;

        F0R (i, N){
            cin >> a[i];
            if (a[i] ^ ls) ls = a[i], cnt ++;
        }

        if (1 ^ cnt){
            ll p = 0, n = 0;
            vector<int> ans;

            F0R (i, N){
                int j = (i + 1) % N;
                if (a[i] <= a[j]){
                    p += a[j] - a[i];
                    ans.push_back(i + 1);
                } else {
                    n += a[i] - a[j];
                }
            }

            if (n ^ p){
                cout << -1 << endl;
            } else {
                cout << sz(ans) << endl;
                each (i, ans){
                    cout << i << ' ';
                }
                cout << endl;
            }
        } else {
            cout << 1 << endl << 1 << endl;
        }
    }
}