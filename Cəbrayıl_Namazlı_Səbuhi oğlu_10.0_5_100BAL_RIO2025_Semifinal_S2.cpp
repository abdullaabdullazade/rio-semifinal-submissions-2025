/// bunu izleyen sexs <3

#include <bits/stdc++.h>
using namespace std;

#define pii pair < int , int >
#define mp(a,b) make_pair(a,b)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b/gcd(a,b)
#define int long long
#define fi first
#define se second

const int inf = 1e18;

void solve() {
    int n; cin >> n;
    set < int > s;
    vector < int > v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    if(n <= 2) {
        cout << "1\n";
        return;
    }

    int cnt = 0, j;
    for(int i = 0;i < n;i++) {
        auto it = s.lower_bound(v[i]);
        auto l = it, r = it;
        if(it != s.begin()) --l;
        if(it != --s.end()) ++r;

       // cout << i << " " << v[i] << " inhr\n";

        if(v[i+1] != *r && v[i+1] != *l) {
           // cout << "ee\n";
            cnt++;
            continue;
        }

      //  cout << *l << " " << *r << "\n";
      //  cout << *it << " " << v[i] << ":\n";
        bool is = true;
        if(v[i+1] > v[i]) {
            for(;it != s.end() && i < n;++it) {
                if(v[i] == *it) i++;
                else {
               //     cout << *it << " " << v[i] << "a\n";
                    cnt++;
                    is = false;
                    i--;
                    break;
                }
               // if(i == n-1) is = false;
            }
            if(is) {
                i--;
                cnt++;
              //  cout << "ea\n";
            }

        }
        else {
            for(;it != --s.begin() && i < n;--it) {
                if(v[i] == *it) i++;
                else {
                 //   cout << *it << " " << v[i] << "b\n";
                    i--;
                    cnt++;
                    is = false;
                    break;
                }
             //   if(i == n-1) is = false;
            }
            if(is) {
                i--;
                cnt++;
               // cout << "eb\n";
            }
        }
    }

    cout << cnt << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1; cin >> t;
    while(t--) solve();

}

/// 1 5 2 3 4
/// 1 3 2 4
// 1
