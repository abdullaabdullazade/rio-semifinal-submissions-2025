#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
using namespace std;
const int sz = 1e5+5;
const int inf = 1e9+7;
const long long infl = 1e18+1LL;


int sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }return sum;
}


int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }sort(all(a));
    for(int i = 0; i <n; i++){
        cin >> b[i];
    }sort(all(b));
    int ans = 1;
    int  c =0;
    for(auto i: a){
        int lb = upper_bound(b.begin(), b.end(), i)-b.begin();
        ans *= lb-c;
        c++;
    }
    cout << ans << endl;

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
