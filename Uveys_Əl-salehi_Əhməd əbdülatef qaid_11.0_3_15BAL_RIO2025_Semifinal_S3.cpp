#include<bits/stdc++.h>
using namespace std;
#define int long long


const int sz = 100005;
int a[sz];

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 1; i < n; i++){
        v[i-1] = abs(a[i] - a[i-1]);
        sum += v[i-1];
    }
    v[n-1] = abs(a[n-1] - a[0]);
    sum += v[n-1];


    if(sum % 2){
        cout << -1 << endl;
        return;
    }
    sum = sum/2;
    if(sum == 0){
        cout << 1 << endl << 1 <<endl;
        return;
    }

    for(int i = 0; i <= (1<<n); i++){
        int res = 0;
        vector<int> c;
        for(int j = n-1; j >= 0 ; j--){
            if(i & (1 <<j)){
                res += v[j];
                c.push_back(j);
            }
        }
        if(res == sum){
            cout << c.size() << endl;
            for(int h : c){
                cout << h + 1 << " ";
            }
            cout << endl;
            return;
        }
    }
}

signed main(){
    int t = 1;
    cin >> t;
    while(t--) solve();
}
