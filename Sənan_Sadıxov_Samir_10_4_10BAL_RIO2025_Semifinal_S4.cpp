/// ALLAH
#include <bits/stdc++.h>
#define ll long long int
#define int ll
#define pii pair<int, int>
#define pb push_back
#define F first
#define S second
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const int N = 1000005;
const int INF = 1e18;
const int mod = 1e9+7;

signed main()
{
    io;
    int n, k;
    cin >> n >> k;
    vector<int> a(k), b(k);
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    vector<int> v, p;
    for(int i = 0; i < k; i++){
        int x = a[i];
        int z = upper_bound(b.begin(), b.end(), x)-b.begin();
        v.pb(abs(x-b[z]));

    }
    for(int i = 0; i < k; i++){
        int x = b[i];
        int z = upper_bound(a.begin(), a.end(), x)-a.begin();
        p.pb(abs(x-a[z]));

    }
    sort(p.begin(), p.end());
    sort(v.begin(), v.end());
    cout << min(v[0], p[0]) << endl;
    return 0;
}
