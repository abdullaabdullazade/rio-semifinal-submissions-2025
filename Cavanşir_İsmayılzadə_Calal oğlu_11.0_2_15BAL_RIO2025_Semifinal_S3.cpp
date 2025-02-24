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
    vector<int> temp(n + 1, 0);
    for(int i = 0; i < n; i++){
        cin >> temp[i];
    }
    temp[n] = temp[0];
    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        v[i] = abs(temp[i] - temp[i + 1]);
    }
    for(int i = 1; i < (1 << n); i++){
        ll fr = 0, sc = 0;
        vector<int> frpath(0), scpath(0);
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                fr += v[j];
                frpath.emplace(j + 1);
            }
            else{
                sc += v[j];
                scpath.emplace(j + 1);
            }
        }
        if(fr == sc){
            cout << frpath.size() << "\n";
            for(auto i : frpath){
                cout << i << " ";
            }
            cout << "\n";
            return;
        }

    }
    cout << "-1\n";

}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

}
