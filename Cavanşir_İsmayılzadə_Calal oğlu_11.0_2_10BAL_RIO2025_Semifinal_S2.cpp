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
    int ind = 0, ans = 0, curr = 0;
    bool inc = false;
    while(ind <= n - 1){
        if(curr == 0 && abs(v[ind] - v[ind + 1]) == 1){
            if(v[ind] < v[ind + 1]) inc = true;
            else inc = false;
            ind++;
            curr++;
        }
        else if(v[ind] - v[ind + 1] == 1 && !inc){
            ind++;
            curr++;
        }
        else if(v[ind + 1] - v[ind] == 1 && inc){
            ind++;
            curr++;
        }
        else{
            ans++;
            ind++;
            curr = 0;
            //cout << "here" << ind << " s";
        }
    }
    if(curr > 0) ans++;

    cout << ans << "\n";
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

}
