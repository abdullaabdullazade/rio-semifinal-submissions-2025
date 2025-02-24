#include <bits/stdc++.h>
#define ll long long
#define emplace(a) emplace_back(a)
#define mp(a, b) make_pair(a, b)
#define all(a) a.begin(), a.end()
#define f first
#define s second
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n, 0), cp(n, 0);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        cp[i] = v[i];
    }
    if(is_sorted(all(v))){
        cout << "1\n";
        return;
    }
    reverse(all(v));
    if(is_sorted(all(v))){
        cout << "1\n";
        return;
    }
    cout << "2\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

}
