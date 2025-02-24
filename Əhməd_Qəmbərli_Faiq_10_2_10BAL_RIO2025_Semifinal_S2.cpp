#include "bits/stdc++.h"

using namespace std;

#define FOR(i,a,b)for(int i=a;i<b;i++)
#define F0R(i,a)FOR(i,0,a)
#define rep(a)F0R(_,a)
#define all(a)begin(a),end(a)
#define con const int

using ll = long long;
using str = string;

con mxN = 1e5 + 5;

int ord[mxN];
int a[mxN];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    int T;
    cin >> T;
    
    rep (T){
        int N;
        cin >> N;

        F0R (i, N){
            cin >> a[i];
            ord[i] = i;
        }

        sort(ord, ord + N, [](int i, int j){
            return a[i] < a[j];
        });

        F0R (i, N){
            a[ord[i]] = i;
        }

        int ans = 1;

        for (int i = 0; i < N - 1;){
            int flag = -1;
            if (a[i + 1] > a[i]){
                flag = 1;
            }
            int broke = 0;
            FOR (j, i + 1, N){
                if (a[j] != a[j - 1] + flag){
                    ans ++, i = j, broke = 1;
                    break;
                }
            }
            if (!broke) break;
        }

        cout << ans << endl;
    }
}